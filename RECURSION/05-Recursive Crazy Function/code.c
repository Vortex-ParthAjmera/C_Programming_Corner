#include <stdio.h>

void crazy(int n, int a, int b)
{
    if (n <= 0)
        return;
    crazy(n - 1, a, b + n);
    printf("%d %d %d \n", n, a, b);
    crazy(n - 1, b, a + n);
}

int main()
{
    crazy(3, 4, 5);
    return 0;
}
