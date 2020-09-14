// This program will find the answer from an exponential series modulus of a given number --> M.
// Where a is the base, b is the highest exponent (number of term - 1)value and w.r.t M we need to 
// calculate modulus of the series. 

// Sample series-> 1 + a+ a^2+a^3+.... 

#include<stdio.h>
#include<math.h>

int bigMod(int a, int b, int M){
    if(b == 0 ){
        return 1 % M;
    }
    
    int x = bigMod(a, b/2, M);
    x = (x*x) % M;

    if(b%2 == 1){
        x = (x*a)% M;
    }

    return x;
}


int main(){

    int base, numberOfTerm, modeValue;
    printf("Enter the base value of base, numberOfTerm and modeValue: \n");
    scanf("%d%d%d",&base, &numberOfTerm, &modeValue);

    int result = 0, temp;

    for(int i = 0; i < numberOfTerm; i++){
        temp = bigMod(base, i, modeValue);
        result = ((result + temp)% modeValue);
    }

    printf("\n*** Answer = %d .\n", result);

    return 0;
}