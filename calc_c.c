#include <stdio.h>
#include <math.h>
int main(){
	int option=0;
	//mode=true --> int mode, mode=false --> double precision mode
	_Bool mode = 0;
	printf("This program implements a calculator.\n");

while(option != 8){
	printf("Options:\n1 - addition\n2 – subtraction\n3 – multiplication\n4 – division\n5 – exp(x)\n6 – log(x)\n7 - toggle calculator type\n8 - exit program\n");
	printf("Please enter your option: ");
	scanf("%d", &option);
	switch(option){
	case 1:
	if(mode==1){
		int n1, n2;
		printf("Enter first term: ");
		scanf("%d", &n1);
		printf("Enter second term: ");
		scanf("%d", &n2);
		printf("The sum is: %d\n", n1+n2);
		break;
	}
	else{
		double n1, n2;
		printf("Enter first term: ");
		scanf("%lf", &n1);
		printf("Enter second term: ");
		scanf("%lf", &n2);
		printf("The sum is: %.15lf\n", n1+n2);
		break;
	}
	case 2:
	if(mode==1){
		int n1, n2;
		printf("Enter first term: ");
		scanf("%d", &n1);
		printf("Enter second term: ");
		scanf("%d", &n2);
		printf("The difference is: %d\n", n1-n2);
		break;
	}
	else{
		double n1, n2;
		printf("Enter first term: ");
		scanf("%lf", &n1);
		printf("Enter second term: ");
		scanf("%lf", &n2);
		printf("The difference is: %.15lf\n", n1-n2);
		break;
	}
	case 3:
	if(mode==1){
		int n1, n2;
		printf("Enter first term: ");
		scanf("%d", &n1);
		printf("Enter second term: ");
		scanf("%d", &n2);
		printf("The product is: %d\n", n1*n2);
		break;
	}
	else{
		double n1, n2;
		printf("Enter first term: ");
		scanf("%lf", &n1);
		printf("Enter second term: ");
		scanf("%lf", &n2);
		printf("The product is: %.15lf\n", n1*n2);
		break;
	}
	case 4:
	if(mode==1){
		int n1, n2;
		printf("Enter first term: ");
		scanf("%d", &n1);
		printf("Enter second term: ");
		scanf("%d", &n2);
		if(n2==0){
			printf("Cannot divide by zero!\n");
			break;
		}
		printf("The quotient is: %d\n", n1/n2);
		break;
	}
	else{
		double n1, n2;
		printf("Enter first term: ");
		scanf("%lf", &n1);
		printf("Enter second term: ");
		scanf("%lf", &n2);
		if(n2==0){
			printf("Cannot divide by zero!\n");
			break;
		}
		printf("The quotient is: %.15lf\n", n1/n2);
		break;
	}
	case 5:
	if(mode==1){
		printf("Cannot calculate with integers.");
	}
	else{
		double n1;
		printf("Enter term: ");
		scanf("%lf", &n1);
		printf("The result of exp(%.15lf) is: %.15lf\n", n1, exp(n1));
	}
	break;
	case 6:
	if(mode==1){
		printf("Cannot calculate with integers.");
	}
	else{
		double n1;
		printf("Enter term: ");
		scanf("%lf", &n1);
		printf("The result of log(%.15lf) is: %.15lf\n", n1, log(n1));
	}
	case 7:
		if(mode==1){
			mode=0;
			printf("Calculator now works with doubles.\n");
			break;
		}
		else{
			mode=1;
			printf("Calculator now works with integers.\n");
			break;
		}
		break;
	case 8:
		break;
	default:
		printf("Invalid Option.\n");
		printf("Options:\n1 - addition\n2 – subtraction\n3 – multiplication\n4 – division\n5 – toggle calculator type\n6 – exit program\n");
		break;

	}
}


}