#include <stdio.h> 
#include <math.h> 
int largestPrimeFactor(int n) {
     int largest = -1; 
     while (n % 2 == 0){
         largest = 2; n = n / 2; 
        } 
        for (int i = 3; i <= sqrt(n); i = i + 2) {
             while (n % i == 0) {
                 largest = i; n = n / i; 
                } 
            } 
            if (n > 2) 
            largest = n; 
        return largest; 
    } int main() { 
        int n; 
        printf("Enter a number: "); 
        scanf("%d", &n); 
        printf("The largest prime factor of %d is: %d\n", n, largestPrimeFactor(n)); 
        return 0; 
    }