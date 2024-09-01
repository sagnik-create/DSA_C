#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void SelSort(int arr[], int size) {
    int i, j, min;
    for (i = 0; i < size - 1; i++) {
        min = i;  // Assume the current element is the minimum
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;  // Update min if a smaller element is found
            }
        }
        if (min != i) {
            swap(&arr[i], &arr[min]);  // Swap only if a new minimum was found
        }
    }

    // Print the sorted array
    for (int k = 0; k < size; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");  // Ensure the output ends with a newline
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
    SelSort(arr, n);

    return 0;
}
