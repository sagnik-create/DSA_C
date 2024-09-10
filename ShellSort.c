// Online C compiler to run C program online
#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void ShellSort(int arr[], int size){
    int gap,i,j;
    for (gap=size/2;gap>=1;gap/=2){
    for(i= gap; i<size;i++){
        for(j = i-gap; j>=0; j-=gap){
            if (arr[j+gap]>arr[j]){
                break;
            }
            else {
                swap(&arr[j+gap],&arr[j]);
            }
        }
    }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Create an array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nSorted array: ");
    ShellSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}