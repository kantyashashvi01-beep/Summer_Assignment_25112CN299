#include<stdio.h>
int main(){
    int n,r,R=0,a;
    printf("the number:");
    scanf("%d",&n);
    a=n;
    for(int i=0;n!=0;i++){
    r=n%10;
    R=R*10+r;
    n/=10;
    }
    n=a;
    if(R==n){
        printf("%d is a palindrome",n);
    }
    else{
        printf("%d is not a palindrome",n);
    }
    return 0;
}