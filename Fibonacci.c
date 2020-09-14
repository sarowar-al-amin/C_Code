#include<stdio.h>

int main(){
    int a = 0, b = 1, n;
    printf("Enter the n: ");
    scanf("%d",&n);
    printf("%d %d",a, b);
    for(int i = 3; i<=n; i++){
        int c = a+b;
        printf(" %d", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}