#include<stdio.h>
int palindrome(int n){
    int sum=0,r;
    while(n!=0){
        r=n%10;
        sum=r+sum*10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int s=palindrome(n);
    if(s==n){
        printf("%d is a palindrome",n);
    }
    else{
        printf("%d is not a palindrome",n);
    }
    return 0;
}