#include<stdio.h>
int main(){
    int n,p=1,sum=0,r,a;
    printf("the number:");
    scanf("%d",&n);
    a=n;
    for(int i=1;n!=0;i++){
        r=n%10;
        for(int j=1;j<=r;j++){
            p=p*j;
        }
        sum=sum+p;
        p=1;
        n=n/10;

    }
    if(sum==a){
        printf("%d is a strong number",a);

    }
    else{
        printf("%d is not a strong number",a);
    }
    
    return 0;
}