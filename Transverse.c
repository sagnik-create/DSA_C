#include <stdio.h>
int trans(int arr[],int lmnt){
    return arr[lmnt];
}
int main() {
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
    printf("%d\n",trans(arr,lmnt));
}