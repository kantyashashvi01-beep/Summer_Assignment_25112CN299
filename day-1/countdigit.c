#include<stdio.h> 
int main(){
    int n,count=0;
    printf("the number:");
    scanf("%d",&n);
    
        for(int i=0; n!=0; i++){
            n/=10;
            count++;
        }
    
    printf("total number of digits: %d",count);
    return 0;
}