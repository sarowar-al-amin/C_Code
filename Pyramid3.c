#include<stdio.h>

int main(){

    int n;
    printf("Enter the n:");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){

        for(int j = 0; j <(n-i-1); j++)
        printf(".");

        for(int j = 0; j<= i; j++)
        printf("%d", j+1);

        for(int j = i; j>0; j--)
        printf("%d",j);

        for(int j = 0; j<(n-i-1); j++)
        printf(".");

        printf("\n");

    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j <= i; j++)
        printf(".");

        for(int j = 1; j <(n-i-1); j++)
        printf("%d", j);

        for(int j = (n-i-1); j > 0; j--)
        printf("%d", j);

        for(int j = 0; j <= i; j++)
        printf(".");

        printf("\n");
    }
    return 0;
}