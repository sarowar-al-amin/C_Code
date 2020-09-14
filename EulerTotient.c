#include<stdio.h>
#include<math.h>

int primeChecker(int x){
    int limit = sqrt(x);
    if(x <= 1){
        return 0;
    }else if(x == 2){
        return 1;
    }else if(x%2 == 0)
    {
        return 0;
    }else
    {
        
        for(int i = 3; i <= limit; i+= 2){
            if(x%i == 0){
                return 0;
            }
        }
    }
    
    return 1;
}



int main(){

    int number;
    printf("Enter the number : \n");
    scanf("%d", &number);

    int value[number], counter = 0;

    for(int i = 0; i < number; i++){
        value[i] = 0;
    }

    int primeCheck = primeChecker(number);

    if(primeCheck){
        counter = number - 1;
        printf("\n Answer = %d", counter);
    }else{
        counter = 1;
        int j = 0;
        int limit = sqrt(number);
        // printf("%d ==>limit\n", limit);
        for(int i = 2; i <= limit; i++){
            if(number%i == 0){
                value[j] = i;
                // printf(" value-%d ",value[j]);
                counter++;
                j++;
            }
        }

        for(int i = 0; i < j; i++){
            int k = 2;
            int temp = value[i]*k;
            while (temp <= number)
            {
                // printf(" %d-%d ", temp, value[i]);
                if(value[temp] == 0){
                    counter++;
                    value[temp] = temp;

                }
                k++;
                temp = value[i]*k;

            }
            
        }

        printf("\n Answer = %d\n", number - counter);
        
    }





    return 0;
}