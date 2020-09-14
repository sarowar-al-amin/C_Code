#include<stdio.h>

int nOfvalue(int x, int upper){
    if(x > upper){
        return 0;
    }
    return upper/x;
}
int main(){

    int totalNumber, upper,checker = 1;
    printf("Enter the value of total number: \n");
    scanf("%d", &totalNumber);

    printf("\nUpper limit: \n");
    scanf("%d", &upper);

    int number[totalNumber+1];

    printf("\nEnter those number now: \n");
    for(int i = 1; i <= totalNumber; i++){
        scanf("%d", &number[i]);
        checker *= number[i];
    }

    int answer = 0,temp,counter = 0;

    if(checker < upper){
        
    for(int i = 1; i <=totalNumber; i++){
        int m =1;
        
        for(int j = 1; j <= (totalNumber - i+1); j++){
            // temp *= number[j];
            // printf(" %d ", number[j]);
            temp = 1;
            int k = 0;
            while (k != i)
            {
                temp *= number[m];
                k++;
                m++;
                
            }
            // printf(" %d  ", temp);
            if(i%2 == 0){
                int value = nOfvalue(temp, upper);
                answer -= value ;
            }else
            {
                int value = nOfvalue(temp, upper);
                answer += value;
            }
            
            m -= (i -1);
            
            
        }
        
        printf("\n");

    }
    printf("\n Answer = %d \n",answer);
    }else
    {
        printf("Upper value should be larger than that.");
    }
    


    return 0;
}