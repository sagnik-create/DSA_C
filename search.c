#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;  
    }
    return -1;  
}

int main() {
    int size, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements in ascending order:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target value to search: ");
    scanf("%d", &target);

    int result1 = binarySearch(arr, size, target);
    int result2 = linearSearch(arr, size, target);
    
    if (result1 != -1)
        printf("Element is present at index %d through Binary Search\n", result1);
    else
        printf("Element is not present in array through Binary Search\n");
    
    if (result2 != -1)
        printf("Element is present at index %d through Linear Search\n", result2);
    else
        printf("Element is not present in array through Linear Search\n");

    return 0;
}
