// This program will print nth palindrome number using only if-else where
// n is below 100 and 

#include<stdio.h>

int main(){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 10){
        printf("Answer : %d",n);
    }else if(n < 19){
        int ans = 11*(n -9);
        printf("Answer : %d", ans);
    }else if(n < 29){
        int ans = 101 + (n - 19)*10;
        printf("Answer : %d", ans);
    }else if(n < 38){
        int ans = 202 + (n - 28)*10;
        printf("Answer : %d", ans);
    }else if(n < 48){
        int ans = 303 + (n - 38)*10;
        printf("Answer : %d", ans);    
    }else if( n< 58){
        int ans = 404 + (n - 48)*10;
        printf("Answer : %d", ans);
    }else if(n < 68){
        int ans = 505 + (n - 58)*10;
        printf("Answer : %d", ans);
    }else if(n < 78){
        int ans = 606 + (n - 68)*10;
        printf("Answer : %d", ans);
    }else if(n < 88){
        int ans = 707 + (n - 78)*10;
        printf("Answer : %d", ans);
    }else if(n < 98){
        int ans = 808 + (n - 88)*10;
        printf("Answer : %d", ans);
    }else if(n < 101){
        int ans = 909 + (n - 98)*10;
        printf("Answer : %d", ans);
    }else
    {
        printf("Input should be less than or equal to 100.");
    }
    
    
    
    return 0;
}