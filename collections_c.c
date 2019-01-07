//******************************
//Ryan Hoffman - CS135 Project 2 Extra Credit
//******************************
#include <stdio.h>

int main(){
	int v1, pv1, v2, pv2, v3, pv3, budget;
	printf("Enter volumes and price per volume for collection 1: ");
	scanf("%d %d", &v1, &pv1);
	printf("Enter volumes and price per volume for collection 2: ");
	scanf("%d %d", &v2, &pv2);
	printf("Enter volumes and price per volume for collection 3: ");
	scanf("%d %d", &v3, &pv3);
	printf("Enter Bob’s budget: ");
	scanf("%d", &budget);
	int total1=v1*pv1;
	int total2=v2*pv2;
	int total3=v3*pv3;
	if(budget>0){
		printf("(1) Bob has some money to buy collections.");
		if((total1>budget&&total2>budget) || (total2>budget&&total3>budget) || (total1>budget&&total3>budget)){
			printf("\n(2) At least two collections are more expensive than Bob’s budget.");
		}
		else{
			printf("\n(2) At least two collections are cheaper than or equal to Bob’s budget.");
		}
		if((total1==total2)&&(total2==total3)&&(total1==total3)){
			printf("\n(3) All the collections cost the same.");
		}
		else if((total1==total2)||(total2==total3)||(total1==total3)){
			printf("\n(3) Only two collections cost the same amount of money.");
		}
		else{
			printf("\n(3) No collections have the same price.");
		}
		if((total1<=budget&&total2>budget&&total3>budget)||(total2<=budget&&total1>budget&&total3>budget)||(total3<=budget&&total1>budget&&total2>budget)){
			printf("\n(4) Only one collection is cheaper than or equal to Bob’s budget.");
		}
		else{
			printf("\n(4) More than one collection is cheaper than or equal to Bob’s budget or they are all more expensive.");
		}
		if((total1+total2+total3<=budget)){
			printf("\n(5) Bob can buy all three collections.");
		}
		else if((total1+total2<=budget)||(total2+total3<=budget)||(total1+total3<=budget)){
			printf("\n(5) Bob can only buy two of the collections.");
		}
		else if((total1<=budget)||(total2<=budget)||(total3<=budget)){
			printf("\n(5) Bob can only buy one collection.");
		}
		else{
			printf("\n(5) Bob cannot buy any collection.");
		}
		if(total1<=budget&&total2<=budget&&total3<=budget){
			printf("\n(6) Bob has enough money to buy any one of the three collections.");
		}
		else{
			printf("\n(6) Bob does not have enough money to buy any one of the three collections.");
		}
		if(total1>budget&&total2>budget&&total3>budget){
			printf("\n(7) Bob does not have enough money to buy any collection.\n");
		}
		else{
			printf("\n(7) Bob can buy at least one collection.\n");
		}
	}
	else{
		printf("(1) Bob does not have money to buy anything.\n");
	}

}