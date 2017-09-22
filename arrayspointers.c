#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int array1[10];

  srand(time(NULL));
  int i;
  for (i = 0; i < 9; i++){
    array1[i] = rand();
  }
  array1[9] = 0;

  for (i = 0; i < 10; i++){
    printf("%d: %d\n", i, array1[i]);
  }
  printf("\n");

  int array2[10];

  int *ip = &array1[9];
  for (i = 0; i < 10; i++){
    array2[i] = *ip;
    ip -= 1;
  }

  for (i = 0; i < 10; i++){
    printf("%d: %d\n", i, array2[i]);
  }
}