#include<stdio.h>
int maximum (int x, int y){
    int max=x;
    if(x<y){
        max=y;
    }
    return max;
}
int main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    int m=maximum(a,b);
    printf("the maximum number is %d",m);
    return 0;
}