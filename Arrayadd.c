#include <stdio.h>

int main(){
    int n1;
    printf("Enter the size of the First Array: ");
    scanf("%d",&n1);
    
    int n2;
    printf("Enter the size of the Second Array: ");
    scanf("%d",&n2);

    int arr1[n1], arr2[n2], i;

    printf("Enter the values of the First Array: ");
    for(i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the values of the Second Array: ");
    for(i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }

    int k = n1 + n2;
    int arrm[k];

    for(i = 0; i < n1; i++){
        arrm[i] = arr1[i];
    }

    for(i = 0; i < n2; i++){
        arrm[n1 + i] = arr2[i];
    }

    printf("The merged array is: ");
    for(i = 0; i < k; i++){
        printf("%d ", arrm[i]);
    }

    return 0;
}
