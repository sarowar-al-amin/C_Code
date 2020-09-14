#include<stdio.h>

int derangmentNumberCalculation(int n){
    if(n == 0){
        return 1;
    }else if( n== 1){
        return 0;
    }
    return (n - 1)*(derangmentNumberCalculation(n-1) + derangmentNumberCalculation(n -2));
}

int main(){

    int number;
    printf("Enter the value of n: \n");
    scanf("%d", &number);
    int result = derangmentNumberCalculation(number);

    printf("\nAnswer = %d\n", result);
    return 0;
}