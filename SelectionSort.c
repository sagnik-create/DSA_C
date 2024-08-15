#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void SelSort(int arr[],int size){
    int i,j,min;
    for (i=0 ; i<size-1; i++){
        min = i;
    }
    for (j=0; j<size ; j++){
        if(arr[j] <= arr[min]){
            min = j;
        }
        if(min!=i){
            swap(&arr[i],&arr[min]);
        }
    }

    for (int k = 0; k < size; k++) {
        printf("%d ", arr[k]);
    }
}

int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Create an array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Sorted array: ");
    SelSort(arr,n);
    
}