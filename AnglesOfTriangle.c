// This program will find all the angles of a triangle
// where all the arms are given.

#include<stdio.h>
#include<math.h>

int checkEligibility(int x, int y, int z){
    int k = 1;

    if(x < (y+z) && y <(x+z)&& z <(x+y)){
        return k;
    }else
    {
        return -k;
    }
}

int main(){

    float a, b, c;// Those variables will store the value of arms.
    float A, B, C;// Those variable will store the vale of angles.

    printf("Enter the value of arms: ");
    scanf("%f%f%f", &a,&b,&c);

    int eligible = checkEligibility(a,b,c);

    float pi = acos(-1);

    if(eligible == 1){
        A = (acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))*(180/pi);
        B = (acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c)))*(180/pi);
        C = (acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*b*a)))*(180/pi);

        printf("A = %f , B = %f , C = %f\n", A, B,C);

    }else
    {
        printf("Inputed values don't hold the condition of being an triangle.");
    }
    
    return 0;
}