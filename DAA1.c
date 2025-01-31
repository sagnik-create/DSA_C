#include <stdio.h>

void findPair(int arr[], int n, int X) {
    int i = 0, j = n - 1;
    
    while (i < j) {
        int sum = arr[i] + arr[j];

        if (sum == X) {
            printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
            return;
        } 
        else if (sum < X) {
            i++;  
        } 
        else {
            j--;  
        }
    }
    
    printf("No such pair exists\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 8, 9};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 10;

    findPair(arr, n, X);

    return 0;
}
