#include<stdio.h>
int main(){
    int n,f,prime=1;
    printf("the number:");
    scanf("%d",&n);
    printf("largest prime factors of %d is ",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            f=i;
        }
        if(f==1){
        continue;
        }
        for(int j=2;j<f;j++){
            if(f%j==0){
                prime=0;
            }
            //if(prime==1){
                //printf(" %d ",f);
           // }
        }  
        if(prime==1){
            printf(" %d ",f);
        }
    }
    
    return 0;
}