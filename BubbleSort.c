#include <stdio.h>
void swap(int *num1,int *num2){
    int temp;
    *num2 = temp;
    *num2 = *num1;
    temp = *num1;
}
int Bubsort(int n,int arr[]){
    int temp;
    for(int i=0;i<n;i++){
        for(int j = 0; j<n-i-1; j++)
        {   if (arr[j] > arr[j+1]){
            swap(&arr[j],&arr[j+1]);
        }
    }
    }
    
    for(int k = 0; k<n ; k++){
        printf("%d ",arr[k]);
    }
    }
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    Bubsort(n,arr);
}