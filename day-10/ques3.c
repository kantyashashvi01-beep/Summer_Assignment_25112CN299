#include<stdio.h>
int main (){
    for(int i=1;i<=5;i++){
        for (int j=1;j<=5-i;j++){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("%d",k);
        }for (int l=2;l<=i;l++){
            printf("%d",i-l+1);
        }
        printf("\n");
    }
    return 0;
}