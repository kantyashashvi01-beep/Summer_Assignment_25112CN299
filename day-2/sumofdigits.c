#include<stdio.h>
int main(){
    int n,sum=0,a,b;
    printf("the number:");
    scanf("%d",&n);
    b=n;
    if (n==0){
        printf("the sum of digits is 0");
    }
    else{
        for(int i=0; n!=0; i++){
            a=n%10;
            n/=10;
            sum=sum+a;

        }
        n=b;
        printf("the sum of digits of %d is %d",n,sum);
    }
    return 0;
}
    