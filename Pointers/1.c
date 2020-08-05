#include <stdio.h>

#define NUM 11 // The size 

int main()
{

  int numbers[NUM] = {1,2,3,4,5,6,7,8,9,10,11}; // Variable array
  int *n_num; // Pointer Var
  int n;

  for(n_num = &numbers[0];n_num < &numbers[NUM];n_num++){ // A bucle 
  }

  for(n=0;n<NUM;n++){
  printf("The number [%i] is: %i\n",n,numbers[n]); //the numbers 
  }

return 0;
}
