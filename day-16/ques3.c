#include <stdio.h>
int main(){
    int n,x;
    printf("the sum must be equal to: ");
    scanf("%d",&x);
    printf("enter the number of terms:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    int count=0;
    printf("the pairs are:");
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(arr[j]+arr[k]==x){
                printf("(%d , %d)\n",arr[j],arr[k]);
                count++;
            }
        }
    }
    printf("the number of pairs are %d",count);
    return 0;
}