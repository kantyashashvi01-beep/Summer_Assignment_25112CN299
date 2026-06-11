#include<stdio.h>
void fibonacci(int n){
    int first_num=0,second_num=1,next;
    for(int i=1;i<=n;i++){
        next=first_num+second_num;
        printf("%d ",first_num);
        first_num=second_num;
        second_num=next;
    }
    return ;
    
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("Fibonacci series:");
     fibonacci(n);
    return 0;
}