#include<stdio.h>
int main(){
    int n,p=1,r,a;
    printf("the number:");
    scanf("%d",&n);
    a=n;
    for(int i=0;n!=0;i++){
        r=n%10;
        p*=r;
        n/=10;
    }
    n=a;
    printf("the product of digits of %d is %d",n,p);
    return 0;
}