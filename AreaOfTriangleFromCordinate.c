// This program will calculate the area of a triangle where
// the coordinate of the three vertex is given.

#include<stdio.h>

int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the coordinate of the first vertex:");
    scanf("%d%d", &x1,&y1);
    printf("\nEnter the coordinate of the second vertex:");
    scanf("%d%d", &x2,&y2);
    printf("\nEnter the coordinate of the third vertex:");
    scanf("%d%d", &x3,&y3); 

    float area;
    area = (float)(x1*(y2-y3) + x2*(y3-y1) + x3*(y1 -y2))/2;

    printf("\nArea of the triangle is : %f\n", area);

    return 0;
}
