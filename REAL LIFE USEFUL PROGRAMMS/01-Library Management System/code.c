#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_SIZE 50

typedef struct {
    int id;
    char title[TITLE_SIZE];
    int available; // 1 if available, 0 if issued/borrowed
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

// Function to add a book
void addBook() {
    if (bookCount == MAX_BOOKS) {
        printf("Library full. Cannot add more books.\n");
        return;
    }
    Book b;
    b.id = bookCount + 1;

    printf("Enter book title: ");
    getchar(); // To consume leftover newline
    fgets(b.title, TITLE_SIZE, stdin);
    b.title[strcspn(b.title, "\n")] = '\0'; // Remove trailing newline

    b.available = 1; // Book initially available

    library[bookCount++] = b;
    printf("Book added with ID %d.\n", b.id);
}

// Function to display all books with status
void displayBooks() {
    if (bookCount == 0) {
        printf("No books in library.\n");
        return;
    }

    printf("\n%-5s %-30s %-10s\n", "ID", "Title", "Availability");
    for (int i = 0; i < bookCount; i++) {
        printf("%-5d %-30s %-10s\n", library[i].id, library[i].title,
               library[i].available ? "Available" : "Issued");
    }
}

// Function to search book by title keyword
void searchBook() {
    if (bookCount == 0) {
        printf("No books in library.\n");
        return;
    }

    char keyword[TITLE_SIZE];
    printf("Enter keyword to search in title: ");
    getchar(); // consume newline
    fgets(keyword, TITLE_SIZE, stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    int found = 0;
    printf("\nSearch results:\n");
    for (int i = 0; i < bookCount; i++) {
        if (strstr(library[i].title, keyword) != NULL) {
            printf("ID: %d, Title: %s, Status: %s\n", library[i].id,
                   library[i].title,
                   library[i].available ? "Available" : "Issued");
            found = 1;
        }
    }
    if (!found) {
        printf("No books found with keyword '%s'\n", keyword);
    }
}

// Function to borrow/issue a book by ID
void borrowBook() {
    if (bookCount == 0) {
        printf("No books in library.\n");
        return;
    }

    int id;
    printf("Enter Book ID to borrow: ");
    scanf("%d", &id);

    if (id <= 0 || id > bookCount) {
        printf("Invalid Book ID.\n");
        return;
    }

    if (!library[id - 1].available) {
        printf("Book is already issued.\n");
        return;
    }

    library[id - 1].available = 0;
    printf("Book '%s' issued successfully.\n", library[id - 1].title);
}

// Function to return a book by ID
void returnBook() {
    if (bookCount == 0) {
        printf("No books in library.\n");
        return;
    }

    int id;
    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    if (id <= 0 || id > bookCount) {
        printf("Invalid Book ID.\n");
        return;
    }

    if (library[id - 1].available) {
        printf("Book was not issued.\n");
        return;
    }

    library[id - 1].available = 1;
    printf("Book '%s' returned successfully.\n", library[id - 1].title);
}

int main() {
    int choice;

    while (1) {
        printf("\nLibrary Management System Menu:\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Borrow/Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                borrowBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
