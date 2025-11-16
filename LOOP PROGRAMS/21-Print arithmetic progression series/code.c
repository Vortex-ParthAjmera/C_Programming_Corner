#include <stdio.h>

int main() {
    int firstTerm, numberOfTerms, commonDifference;
    int count = 1;
    int currentTerm;

    printf("Enter the first term of the A.P. series: ");
    scanf("%d", &firstTerm);

    printf("Enter the number of terms to be printed: ");
    scanf("%d", &numberOfTerms);

    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);

    currentTerm = firstTerm;

    // Loop to print the A.P. series
    while (count <= numberOfTerms) {
        // Print the current term
        printf("%d", currentTerm);

        // Deciding whether to print a comma or newline using if-else
        if (count < numberOfTerms) {
            printf(", ");
        } else {
            printf("\n");
        }

        // Calculate the next term
        currentTerm = currentTerm + commonDifference;
        count++;
    }

    return 0;
}
