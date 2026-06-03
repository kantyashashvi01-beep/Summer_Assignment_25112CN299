#include<stdio.h>
int gcd (int a, int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int num1,num2;
    printf("first number:");
    scanf("%d",&num1);
    printf("second number:");
    scanf("%d",&num2);
    int result=gcd(num1,num2);
    printf("the gcd of %d and %d is %d",num1,num2,result);
    return 0;
}
