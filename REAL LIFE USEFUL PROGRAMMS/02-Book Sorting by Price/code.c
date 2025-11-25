#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_SIZE 50

typedef struct {
    int id;
    char title[TITLE_SIZE];
    float price;
} Book;

void bubbleSortBooks(Book books[], int n) {
    int i, j;
    Book temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (books[j].price > books[j + 1].price) {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void displayBooks(Book books[], int n) {
    printf("\n%-5s %-30s %-10s\n", "ID", "Title", "Price");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-30s $%.2f\n", books[i].id, books[i].title, books[i].price);
    }
}

int main() {
    int n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    Book books[n];
    for (int i = 0; i < n; i++) {
        books[i].id = i + 1;
        printf("Enter title for book %d: ", i + 1);
        getchar(); // consume newline
        fgets(books[i].title, TITLE_SIZE, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; // remove newline

        printf("Enter price for book %d: ", i + 1);
        scanf("%f", &books[i].price);
    }

    bubbleSortBooks(books, n);

    printf("Books sorted by price in ascending order:\n");
    displayBooks(books, n);

    return 0;
}
