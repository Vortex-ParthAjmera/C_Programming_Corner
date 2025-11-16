#include <stdio.h>

// Function to calculate square root using simple approximation (Newton's method)
float sqrt_approx(float num) {
    if (num <= 0) return 0;
    float x = num;
    float y = 0.5 * (x + num / x);
    // Iterate few times for approximate result
    for (int i = 0; i < 10; i++) {
        x = y;
        y = 0.5 * (x + num / x);
    }
    return x;
}

int main() {
    float a, b, c;
    float discriminant;
    float realPart, imagPart, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Coefficient 'a' cannot be 0 in a quadratic equation.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt_approx(discriminant)) / (2 * a);
        root2 = (-b - sqrt_approx(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // One real root (both roots equal)
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt_approx(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
