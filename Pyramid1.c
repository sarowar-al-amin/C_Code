#include<stdio.h>

int main(){

    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    int i, j;
    for( i = 0; i<n;i++){
        int dot = n-i-1;
        for(int k = 0; k <= i; k++)
        printf("*");
        for(int k = 0; k < dot; k++)
        printf(".");

        printf("\n");
    }
    return 0;
}