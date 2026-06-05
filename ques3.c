#include<stdio.h>
int main(){
    int n;
    printf("the number:");
    scanf("%d",&n);
    printf("the factors of %d are ");
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}