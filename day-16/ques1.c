#include<stdio.h>
int main(){
    int n;
    printf("enter the number of terms:");
    scanf("%d",&n);
    int arr[n],actual_sum=0,expected_sum;
    expected_sum=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        printf("enter the element number %d\n",i+1);
        scanf("%d",&arr[i]);
        actual_sum+=arr[i];
    }
    printf("the missing number is %d",expected_sum-actual_sum);
    return 0;
}