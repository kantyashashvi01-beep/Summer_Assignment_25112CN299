#include<stdio.h>
int main(){
    int n,sum=0;
    printf("the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    } 
    printf("sum of first %d natural number is %d",n,sum);
    return 0;
}
