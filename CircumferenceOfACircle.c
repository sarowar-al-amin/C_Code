#include<stdio.h>
#include<math.h>

int main(){

    float radius, pi, circumference;
    pi = acos(-1);
    //printf("%f",pi);
    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    circumference = 2*pi*radius;
    printf("\nCircumference of the circle is : %f unit\n", circumference);

    return 0;
}