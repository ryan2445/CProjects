//Ryan Hoffman  - CS135 Project 5 - arrays.c
#include <stdio.h>

int main(){
	int row, column;
	printf("This program counts occurrences of digits 0 through 9 in an NxM array.\n");
	printf("Enter the size of the array (Row Column): ");
	scanf("%d %d", &row, &column);
	int array[row][column];
	for(int i=0;i<row;i++){
		printf("Enter row %d: ", i);
		for(int j=0;j<column;j++){
			scanf("%d", &array[i][j]);
		}
	}
	int count[10];
	for(int i=0;i<10;i++){
		count[i]=0;
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			switch(array[i][j]){
				case 0:
				count[0]++;
				break;

				case 1:
				count[1]++;
				break;

				case 2:
				count[2]++;
				break;

				case 3:
				count[3]++;
				break;

				case 4:
				count[4]++;
				break;

				case 5:
				count[5]++;
				break;

				case 6:
				count[6]++;
				break;

				case 7:
				count[7]++;
				break;

				case 8:
				count[8]++;
				break;

				case 9:
				count[9]++;
				break;
			}
		}
	}
	printf("Total counts for each digit: \n");
	for(int i=0; i<10;i++){
		printf("Digit %d occurs %d times\n", i, count[i]);
	}
	printf("The digit counts directly from the 1D array: ");
	for(int i=0;i<10;i++){
		printf("%d ", count[i]);
	}
	printf("\nThe original 2D array entered by the user: \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}