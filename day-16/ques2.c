#include <stdio.h>
int main(){
    int n;
    printf("enter the number of terms:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    int max_frequency=0,frequency,max_Element;
    for(int j=0;j<n;j++){
        frequency=0;
        for(int k=0;k<n;k++){
            if(arr[j]==arr[k]){
                frequency++;
            }
        }
        if(max_frequency<frequency){
            max_frequency=frequency;
             max_Element = arr[j];
        }
    }
    printf("Element with maximum frequency = %d\n", max_Element);
    printf("Frequency = %d\n", max_frequency);
    return 0;
}