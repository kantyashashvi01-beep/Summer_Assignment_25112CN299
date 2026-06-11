#include<stdio.h>
int primenumber(int n){
    int prime=1;
    if(n==0 && n==1){
        prime=0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    return prime;
}
int main(){
    int n,p;
    printf("enter the number:");
    scanf("%d",&n);
     p=primenumber(n);
    if(p==1){
        printf("%d is a prime number");
    }
    else{
        printf("%d is not a prime number");
    }
    return 0;
}