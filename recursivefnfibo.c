#include <stdio.h>
int fibonacci(int term) {
    if (term == 0)
        return 0;
    else if (term == 1)
        return 1;
    else
        return fibonacci(term - 1) + fibonacci(term - 2);
}
int main() {
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    printf("Fibonacci series from 1 to %d:\n", n);
    int i = 0;
    int fib;
    while (1) {
        fib = fibonacci(i);
        if (fib > n)
            break;
        if (fib >= 1)  
            printf("%d ", fib);
        i++;
    }
    printf("\n");
    return 0;
}
