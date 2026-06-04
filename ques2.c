#include <stdio.h>
int fibonacci(int n) {
    if (n < 0) {
        return -1; 
    }
    if (n == 0 || n == 1) {
        return n;
    }

    int a = 0; 
    int b = 1; 
    int c;     

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    if (result == -1) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("The %d-th Fibonacci number is: %d\n", n, result);
    }
    
    return 0;

}