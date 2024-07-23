#include <stdio.h>
    
int main(){
    int size;
    printf("Array Size: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int lmnt;
    printf("element no.: ");
    scanf("%d",&lmnt);
    for (int i = lmnt-1; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    size--;
    for (int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}