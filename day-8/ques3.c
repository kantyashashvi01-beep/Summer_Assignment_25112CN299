#include<stdio.h>
int main(){
    for(int i=65;i<=69;i++){
        for(int j=65;j<=i;j++){
            char ch= (char)j;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}
