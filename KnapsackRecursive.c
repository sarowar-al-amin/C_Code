#include<stdio.h>
#include<math.h>

int max(int x, int y){
    if(x> y){
        return x;
    }

    return y;
}

int knapsack(int n, int capacity, int* value, int* weight){
    int result,temp1, temp2;
    if(n == 0 || capacity == 0){
        return 0;
    }else if(weight[n] > capacity){
        result = knapsack(n-1, capacity, value, weight);
    }else
    {
        temp1 = knapsack(n-1, capacity, value, weight);
        temp2 = value[n] + knapsack(n-1, capacity - weight[n], value, weight);
        result = max(temp1, temp2);
    }
    

    return result;
}

int main(){

    int number, knapsack_capacity;
    printf("Enter the iteam number: ");
    scanf("%d", &number);
    printf("\nEnter the knapsack capacity: ");
    scanf("%d",&knapsack_capacity);

    int value[number+1], weight[number+1];
    printf("Enter the respective value and weight of each iteam: \n");
    for(int i = 1; i < number+1; i++){
        scanf("%d%d",&value[i], &weight[i]);
    }
    printf("\n");

    int answer = knapsack(number, knapsack_capacity, value, weight);

    printf("\nAnswer = %d\n", answer);

    return 0;
}