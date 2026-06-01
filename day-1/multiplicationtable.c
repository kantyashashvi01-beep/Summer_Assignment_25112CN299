#include<stdio.h>
int main(){
    int n,product;
    printf("the given number:");
    scanf("%d",&n);
    for(int i=1; i<=10;i++){
        product=i*n;
        printf("%d\n",product);

    }
    return 0;
}