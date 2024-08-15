#include <stdio.h>


void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void Bubsort(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
}

int main() {
        int n;
        printf("Enter The Number");
        scanf("%d",&n);
        int arr[n];

        printf("Create an array: ");
        for (int i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        }
        printf("\n");

        printf("Sorted array: ");
        Bubsort(n, arr);

    return 0;
}

