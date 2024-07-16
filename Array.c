#include <stdio.h>
int arrcr(int n){
  int arr[n];
  printf("Enter the element");
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  return arr[n];
}

int main(){
  int n;
  printf("Enter the size of Array");
  scanf("%d",&n);
  arrcr(n);
}
