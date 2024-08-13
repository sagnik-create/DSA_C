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
    // srand(time(NULL));  // Seed the random number generator

    // while (1) {
        int n;
        printf("Enter The Number");
        scanf("%d",&n);
        // = rand() % 10 + 2;  // Generate n between 2 and 11
        int arr[n];

        printf("Create an array: ");
        for (int i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
            // arr[i] = rand() % 1000;  // Generate array elements between 0 and 999
            // printf("%d ", arr[i]);
        }
        printf("\n");

        // clock_t start = clock();  // Start the clock

        printf("Sorted array: ");
        Bubsort(n, arr);

        // clock_t end = clock();  // End the clock
        // double time_used = ((double) (end - start)) / CLOCKS_PER_SEC;  // Calculate the time taken
        // printf("Time taken to sort the array: %f seconds\n", time_used);

        // Add a delay to avoid flooding the console
        // sleep(1);  // Sleep for 1 second
    // }

    return 0;
}
