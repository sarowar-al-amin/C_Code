// This code will find the result of the modulation operation where
// a is the base, b is the power and M is the Modular value.

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

    int base, power, Mode;

    printf("Enter the base and it's power value: \n");
    scanf("%d%d%d",&base, &power, &Mode);

    int result = bigMod(base, power, Mode);

    printf("\n Answer = %d ", result); 

    return 0;
}