#include<stdio.h>

int main(){

    int n, checker =1;
    printf("Enter the n:");
    scanf("%d", &n);
    if(n<= 1){
        printf("Invalid Operation\n");
    }else if(n==2){
        printf("\n %d is a prime number\n",n);
    }else if((n%2) == 0){
        printf("\nNon prime number.\n");
        checker++;
    }else{
        int m = n/2 +1;
        for(int i = 3; i <= m; i+=2){
            if(n%i == 0){
                checker++;
                printf("\nNon prime number.\n",checker);
                i = m;
            }
        }
    }

    if(checker == 1){
        printf("%d is a prime number\n",n );
    }
        

    
    return 0;
}