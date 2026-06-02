#include<stdio.h>
int main(){
    int n,a=0,r,b;
    printf("the number:");
    scanf("%d",&n);
    b=n;
    for(int i=0; n!=0;i++){
        r=n%10;
        a=a*10+r;
        n/=10;
    }
    n=b;
    printf("the reverse of %d is %d",n,a);
    return 0;
}