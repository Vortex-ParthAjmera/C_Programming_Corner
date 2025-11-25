#include <stdio.h>

int read_matrix(int rows, int cols, int m[rows][cols], const char *prompt) {
    printf("Enter elements of %s matrix (%d elements):\n", prompt, rows * cols);
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (scanf("%d", &m[r][c]) != 1) return 1;
        }
    }
    return 0;
}

void add_matrices(int rows, int cols,
                  int a[rows][cols], int b[rows][cols], int s[rows][cols]) {
    for (int r = 0; r < rows; ++r)
        for (int c = 0; c < cols; ++c)
            s[r][c] = a[r][c] + b[r][c];
}

void print_matrix(int rows, int cols, int m[rows][cols]) {
    printf("Sum matrix:\n");
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c)
            printf("%d\t", m[r][c]);
        printf("\n");
    }
}

int main(void) {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid dimensions\n");
        return 1;
    }

    int A[rows][cols];
    int B[rows][cols];
    int S[rows][cols];

    if (read_matrix(rows, cols, A, "first")) {
        printf("Invalid input\n");
        return 1;
    }
    if (read_matrix(rows, cols, B, "second")) {
        printf("Invalid input\n");
        return 1;
    }

    add_matrices(rows, cols, A, B, S);
    print_matrix(rows, cols, S);

    return 0;
}