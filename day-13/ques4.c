#include<stdio.h>
int main(){
    int n,count_odd=0,count_even=0;
    printf("enter the number of terms:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the element number %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d",arr[j]);
    }
    printf("\n");
    for(int k=0;k<n;k++){
        if(arr[k]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("Number of even element: %d\n Number of odd elements: %d",count_even,count_odd);
    return 0;
}