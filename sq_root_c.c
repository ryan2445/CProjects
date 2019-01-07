#include <stdio.h>
#include <math.h>

int main(){
	float n;
	float new_guess = 1.0;
	float old_guess;
	int counter=0;
	printf("Enter a number: ");
	scanf("%f", &n);
	printf("%-10d%.5f\n", counter, new_guess);
	while(fabs((new_guess*new_guess - n)) >= 1e-2){
		new_guess = (new_guess + (n / new_guess)) / 2.0;
		counter++;
		if(old_guess==new_guess){
			break;
		}
		printf("%-10d%.5f\n", counter, new_guess);
		old_guess=new_guess;
	}
	printf("Estimated square root of %.5f: %.5f\n", n, (new_guess + (n / new_guess)) / 2.0);
}