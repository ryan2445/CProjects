#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	fp=fopen("inventory.txt", "wb");
	int pnums[50];
	int quan;
	float price;
	int count=0;
	while(1){
		_Bool test=1;
		printf("Please enter the item data (part number, quantity, price): ");
		scanf("%d, %d, %f", &pnums[count], &quan, &price);
		if(pnums[count]==0){
			break;
		}
		for(int i=0;i<count;i++){
			if(pnums[i]==pnums[count]){
				printf("This item has been entered before.\n");
				test=0;
			}
		}
		if(test==1){
			//fprintf(fp, "%d %d %.2f\n", pnums[count], quan, price);
			fwrite(&pnums[count], sizeof(pnums[count]), 1, fp);
			fwrite(&quan, sizeof(quan), 1, fp);
			fwrite(&price, sizeof(price), 1, fp);
			count++;
		}
	}
	printf("Thank you. Inventory stored in file inventory.txt.\n");
	fclose(fp);
	return 0;
	
}

