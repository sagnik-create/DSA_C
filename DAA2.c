#include <stdio.h>

int Counter(int arr[], int num, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (num == arr[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    int size, num;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    int arr[size];

    
    printf("Enter the desired number you want to check: ");
    scanf("%d", &num);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print result
    printf("The number of times %d has occurred is %d\n", num, Counter(arr, num, size));

    return 0;
}
