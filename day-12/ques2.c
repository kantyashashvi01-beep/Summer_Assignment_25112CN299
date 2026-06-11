#include<stdio.h>
int count(int n){
    int count=0;
    for(int i=1;n!=0;i++){
        n=n/10;
        count++;
    }
    return count;
}
int armstrong(int n){
    int sum=0,r,p=1,digits=count(n);
    for(int i=1;n!=0;i++){
        r=n%10;
        for(int j=1;j<=digits;j++){
            p=p*r;
        }
        sum=sum+p;
        n=n/10;
        p=1;
    }
    return sum;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==armstrong(n)){
        printf("%d is an armstrong",n);
    }
    else{
        printf("%d is not an armstrong",n);
    }
    return 0;
}