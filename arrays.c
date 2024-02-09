#include <stdio.h>
#include <stdlib.h>

int main() {
  int size = 5; // this is the size of the array
  int *arr = (int *)malloc(size * sizeof(int)); // allocate memory for the array

  arr[2] = 9;
  printf("\nThe size of arr is %d\n", size);
  printf("\nBut is it?");
  for (int i = 0; i < size; i++) {
    printf("\narr[%d] = %d", i, arr[i]);
  }
  free(arr); 
  return 0;
}
