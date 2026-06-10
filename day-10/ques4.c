#include<stdio.h>
int main (){
    int a;
    for(int i=0;i<5;i++){
        for(int l=0;l<5-i;l++){
            printf(" ");
        }
        for (int j=0;j<=i;j++){
            printf("%c",'A'+j);
        }
        
        for (int k=i-1;k>=0;k--){
            printf("%c",'A'+k);
        }
    
        printf("\n");
    }
    return 0;
}