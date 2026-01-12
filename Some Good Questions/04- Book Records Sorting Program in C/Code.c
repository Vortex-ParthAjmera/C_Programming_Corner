#include <stdio.h>
// c progrmam to store book records using structure and sort them by price using bubble sort
struct Book
{
    char title[50];
    char author[50];
    float price;
};
void bubbleSort(struct Book b1[], int n)
{
    int i, j;
    struct Book temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (b1[j].price > b1[j + 1].price)
            {

                b1[j] = b1[j + 1];
                b1[j + 1] = temp;
                temp = b1[j];
            }
        }
    }
}
void displayBooks(struct Book b1[], int n)
{
    int i;
    printf("Books sorted by price:\n");
    for (i = 0; i < n; i++)
    {
        printf("Title: %s, Author: %s, Price: %.2f\n", b1[i].title, b1[i].author, b1[i].price);
    }
}
int main()
{
    struct Book books[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter title of book %d: ", i + 1);
        scanf("%s", books[i].title);
        printf("Enter author of book %d: ", i + 1);
        scanf("%s", books[i].author);
        printf("Enter price of book %d: ", i + 1);
        scanf("%f", &books[i].price);
    }
    bubbleSort(books, n);
    displayBooks(books, n);
    return 0;
}