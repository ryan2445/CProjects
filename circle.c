#include <stdio.h>

#define PI 3.14f

int main(){
	int radius;
	int diameter;
	float circumference;
	float aCircle;
	int pSquare;
	int aSquare;
	float diff;


	printf("This program computes values related to an inscribed circle.\n");
	printf("Enter the value of the radius: ");
	scanf("%d", &radius);
	diameter=radius*2;
	printf("The diameter of the circle is: %d\n", diameter);
	circumference = 2*PI*radius;
	printf("The circumference of the circle is: %.3f\n", circumference);
	aCircle=PI*radius*radius;
	printf("The area of the circle is: %.3f\n", aCircle);
	pSquare=diameter*4;
	printf("The perimeter of the square is: %d\n", pSquare);
	aSquare=diameter*diameter;
	printf("The area of the square is: %d\n", aSquare);
	diff=aSquare-aCircle;
	printf("The difference between the area of the square and the circle is: %.3f\n", diff);


}