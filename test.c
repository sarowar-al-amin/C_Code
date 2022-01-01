//A function that take a pointer value as arguments
// An example of pointer function

#include<stdio.h>

void value(int  *v){
	printf("%d\n", *v);
}

int main(){
	int x;
	printf("Enter the value to be printed:\n");
	scanf("%d", &x);
	printf("Calling function\n");
	printf("Entered value: ");
	value(&x);
	return 0;
}
