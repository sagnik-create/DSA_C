#include <stdio.h>

int main(){
    int arr[4][4] = {{0,1,0,0}, {2,0,0,2}, {0,3,0,5}, {0,0,0,6}};
    int count = 0;
    int i, j;

    // Counting non-zero elements
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(arr[i][j] != 0){
                count++;
            }
        }
    }

    // Declare sparse array with the correct size
    int sparse[count][3];
    int k = 0; // Counter for sparse array index

    // Storing non-zero elements in sparse representation
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(arr[i][j] != 0){
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = arr[i][j];
                k++;
            }
        }
    }

    // Printing the sparse matrix representation
    printf("Row Index\tColumn Index\tValue\n");
    for(i = 0; i < count; i++){
        printf("%d\t\t%d\t\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
