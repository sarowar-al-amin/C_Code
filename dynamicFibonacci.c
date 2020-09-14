// This program is the implementation of the fibonacci series
// using dynamic programming approch with memoization.

#include<stdio.h>


int fibo(int nth, int* memo){
  int result;
  if(memo[nth] >= 0){
    return memo[nth];
  }
  result = fibo(nth-1,memo) + fibo(nth-2,memo);
  memo[nth] = result;
  
  return result;
}

int main(){

  int number;

  printf("Enter the n term: ");
  scanf("%d", &number);
  printf("\n");

  int memo[number + 1];
  memo[1] = 0;
  memo[2] = 1;

  for(int i = 3; i < number+1; i++){
      memo[i] = -1;
    }  

  int result = fibo(number, memo);

  printf("Answer = %d\n", result);
//   for(int i = 1; i < number+1; i++){
//     printf("%d ",memo[i]);
//   } 

  printf("\n");
  return 0;
}