#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void quickSort(int arr[], int sta, int end) {
    int i, j, pivot;
    if (sta < end) {
        pivot = sta;
        i = pivot + 1;
        j = end;
        while (i <= j) {
            while (arr[i] < arr[pivot] && i < end) {
                i++;
            }
            while (arr[j] > arr[pivot]) {
                j--;
            }
            if (i < j) {
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[pivot], &arr[j]);
        quickSort(arr, sta, j - 1);
        quickSort(arr, j + 1, end);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
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

    printf("Given array is \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);  // Pass n-1 as the last index

    printf("\nSorted array is \n");
    printArray(arr, n);
    return 0;
}
