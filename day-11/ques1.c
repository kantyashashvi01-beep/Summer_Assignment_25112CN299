#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    int s= sum(a,b);
    printf("the sum of %d and %d is %d",a,b,s);
    return 0;
}