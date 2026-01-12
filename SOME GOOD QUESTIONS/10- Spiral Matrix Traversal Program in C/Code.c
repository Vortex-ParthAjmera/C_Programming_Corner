#include <stdio.h>

void printStandardSpiral(int matrix[][100], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    
    while (top <= bottom && left <= right) {
        // Top row (left to right)
        for (int i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++;
        
        // Right column (top to bottom)
        for (int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;
        
        // Bottom row (right to left)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }
        
        // Left column (bottom to top)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }
}

void printModifiedSpiral(int matrix[][100], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    
    while (top <= bottom && left <= right) {
        // Top row (left to right)
        for (int i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++;
        
        // Right column (top to bottom) - STOP before center layer
        if (top <= bottom) {
            for (int i = top; i <= bottom; i++)
                printf("%d ", matrix[i][right]);
            right--;
        }
        
        // Modified: Inner layer clockwise (center outwards)
        if (top <= bottom && left <= right) {
            printf("%d %d %d ", matrix[top][right], matrix[top][left], 
                   matrix[bottom][left], matrix[bottom][right]);
        }
    }
}

int main() {
    int rows, cols, choice;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int matrix[100][100];
    printf("Enter matrix elements row-wise:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    
    // Menu
    printf("\n=== SPIRAL TRAVERSAL OPTIONS ===\n");
    printf("1. Standard Clockwise Spiral\n");
    printf("2. Modified Spiral (1 2 3 6 5 4 7 8 9)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    printf("\n--- Result ---\n");
    if (choice == 1) {
        printf("Standard Clockwise Spiral: ");
        printStandardSpiral(matrix, rows, cols);
    } else if (choice == 2) {
        printf("Modified Spiral: ");
        printModifiedSpiral(matrix, rows, cols);
    } else {
        printf("Invalid choice!\n");
        return 1;
    }
    
    // Quick difference explanation
    printf("\n\n=== KEY DIFFERENCE ===\n");
    printf("- Standard: 1→2→3→6→9→8→7→4→5 (outer→inner counter-clockwise)\n");
    printf("- Modified: 1→2→3→6→5→4→7→8→9 (outer→inner clockwise)\n");
    
    return 0;
}
