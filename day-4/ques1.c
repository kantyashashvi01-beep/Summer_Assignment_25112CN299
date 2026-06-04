#include<stdio.h>
int main(){
    int x,a=0,b=1,next;
    printf("the number:");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        if(i==0){
            next=a;
        }else if(i==1){
            next=b;
        }else{
            next=a+b;
            a=b;
            b=next;
        }
        printf("%d ",next);
    }
    return 0;
}