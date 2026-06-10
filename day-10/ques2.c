#include<stdio.h>
int main (){
    for(int i=1;i<=5;i++){
        for (int j=2;j<=i;j++){
            printf(" ");
        }
        for (int k=9;k>=2*i-1;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}