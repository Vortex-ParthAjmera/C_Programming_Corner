#include <stdio.h>

int fun(int n) {
    if (n > 100)
        return n - 5;
    else
        return fun(fun(n + 11));
}

int main() {
    printf("%d\n", fun(45));
    return 0;
}
