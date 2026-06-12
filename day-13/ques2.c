#include<stdio.h>
int main(){
    int n,sum=0,average;
    printf("enter the number of terms:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the element number %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    for(int k=0;k<n;k++){
        sum=sum+arr[k];
    }
    average=sum/n;
    printf("The sum :%d\n The average:%d",sum,average);
    return 0;
}
