#include <stdio.h>

int main() {
    int firstTerm, totalTerms, commonRatio;
    int i;
    int currentTerm;

    printf("Enter the first term of the GP series: ");
    scanf("%d", &firstTerm);

    printf("Enter the total number of terms: ");
    scanf("%d", &totalTerms);

    printf("Enter the common ratio: ");
    scanf("%d", &commonRatio);

    currentTerm = firstTerm;

    printf("Geometric Progression Series: ");

    for (i = 1; i <= totalTerms; i++) {
        printf("%d ", currentTerm);

        // Use if-else to update the term only if not the last iteration
        if (i < totalTerms) {
            currentTerm = currentTerm * commonRatio;
        } else {
            // Last term, no multiplication needed
            currentTerm = currentTerm; // This line is just to show if-else usage, can be omitted
        }
    }

    printf("\n");
    return 0;
}
