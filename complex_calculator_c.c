//Ryan Hoffman - CS135 - Complex Calculator Extra Credit
#include <stdio.h>
void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void divide(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void read_num(float *real_part, float *imaginary_part);
void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2);
void print_complex(float real_part, float imaginary_part);
int main(){
	int input;
	float real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, real_result, imaginary_result;

	printf("Complex Number Arithmetic Program: \n");
	do{
		printf("1) Add two complex numbers\n");
		printf("2) Subtract two complex numbers\n");
		printf("3) Multiply two complex numbers\n");
		printf("4) Divide two complex numbers\n");
		printf("5) Quit\n");
		printf("Choose an option (1 - 5): ");
		scanf("%d", &input);
		switch(input){
			case 1:
			read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
			add(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
			print_complex(real_result, imaginary_result);
			break;
			case 2:
			read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
			subtract(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
			print_complex(real_result, imaginary_result);
			break;
			case 3:
			read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
			multiply(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
			print_complex(real_result, imaginary_result);
			break;
			case 4:
			read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
			divide(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
			print_complex(real_result, imaginary_result);
			break;
			case 5:
			printf("Bye!\n");
			break;
			default:
			printf("Please input a valid menu option\n");
			break;
		}
	}while(input!=5);
}

void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){
	*real_result=real_part_1+real_part_2;
	*imaginary_result=imaginary_part_1+imaginary_part_2;
}
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){
	*real_result=real_part_1-real_part_2;
	*imaginary_result=imaginary_part_1-imaginary_part_2;
}
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){
	*real_result=(real_part_1*real_part_2)-(imaginary_part_1*imaginary_part_2);
	*imaginary_result=(real_part_1*imaginary_part_2)+(imaginary_part_1*real_part_2);
}
void divide(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){
	*real_result= (real_part_1*real_part_2+imaginary_part_1*imaginary_part_2)/(real_part_2*real_part_2+imaginary_part_2*imaginary_part_2);
	*imaginary_result=(-1*(real_part_1*imaginary_part_2)+imaginary_part_1*real_part_2)/(-1*(real_part_2*imaginary_part_2)+imaginary_part_2*real_part_2);
	if((-1*(real_part_2*imaginary_part_2)+imaginary_part_2*real_part_2)==0){
		*imaginary_result=(-1*(real_part_1*imaginary_part_2)+imaginary_part_1*real_part_2)/(real_part_2*real_part_2+imaginary_part_2*imaginary_part_2);
	}
}
void read_num(float *real_part, float *imaginary_part){
	printf("Please type in the real component: ");
	scanf("%f", &*real_part);
	printf("Please type in the imaginary component: ");
	scanf("%f", &*imaginary_part);
}
void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2){
	printf("Reading the first imaginary number...\n");
	read_num(real_part_1, imaginary_part_1);
	printf("Reading the second imaginary number...\n");
	read_num(real_part_2, imaginary_part_2);
}
void print_complex(float real_part, float imaginary_part){
	printf("The operation yields %.3f + %.3fi\n", real_part, imaginary_part);
}

