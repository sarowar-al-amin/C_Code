#include<stdio.h>

int main(){
    double sum = 0;
    int n, flag = 1;

    printf("Enter the n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        //int flag2 = ((i+1)*(i+1))/2;
        double sum2 = 0;
        for(int j = 1; j != i+1; j++){
            double mul = 1;
            int k = 0;
            while (k<j)
            {
                mul *= flag;
                k++;
                flag++;
            }
            // printf(" mul=%lf",mul);
            sum2 += mul;
            //printf(" sum2=%lf", sum2);
        }
        sum += sum2;
    }

    printf("\n Summation/result of the series is : %lf\n", sum);

    return 0;
}