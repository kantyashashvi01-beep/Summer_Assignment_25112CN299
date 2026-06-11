#include<stdio.h>
int factorial(int n){
    int p=1;
    for(int i=2;i<=n;i++){
        p=p*i;
    }
    return p;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int f= factorial(n);
    printf("the factorial of %d is %d",n,f);
    return 0;
}