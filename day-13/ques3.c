#include<stdio.h>
int main(){
    int n;
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
    int small=arr[0],large=arr[0];
    for(int k=1;k<n;k++){
        if(small>arr[k]){
            small=arr[k];
        }
    }
    for(int l=1;l<n;l++){
        if(large<arr[l]){
            large=arr[l];
        }
    }
    
    printf("The smallest element:%d\n The largest element:%d",small,large);
    return 0;
}
