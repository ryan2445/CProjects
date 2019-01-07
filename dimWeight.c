#include <stdio.h>

int main(){
	int height;
	int depth;
	int width;
	int density;

	printf("Enter a height: ");
	scanf("%d", &height);
	printf("Enter a depth: ");
	scanf("%d", &depth);
	printf("Enter a width: ");
	scanf("%d", &width);
	printf("Enter a density: ");
	scanf("%d", &density);

	int volume = height * depth * width;
	int dimWeight = volume/density;

	printf("\nVolume: %d", volume);
	printf("\nDimensional Weight: %d\n", dimWeight);



}