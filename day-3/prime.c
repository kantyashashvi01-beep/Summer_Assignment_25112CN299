#include<stdio.h>
int main(){
    int n,flag=0,r,a;
    printf("the number:");
    scanf("%d",&n);
    a=n;
    if(n==0||n==1){
        flag=1;
    }
    else{
    for(int i=2;i<n;i++){
        r=n%i;
        if(r==0){
            flag=1;
            break;
        }
    }

}
    n=a;
    if(flag==0){
        printf("%d is a prime number",n);
    }
    else if(flag==1){
        printf("%d is not a prime number",n);
    }
    
    return 0;
}