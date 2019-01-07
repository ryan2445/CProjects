#include <stdio.h>
#include <stdlib.h>
int main(){
	int pnum=0, quan=0;
	float price=0.0;
	FILE *fp;
	fp=fopen("inventory.txt", "rb");
	printf("Below are the items in your inventory.\n");
	printf("Part#\tQuantity\tItem Price\n");
	//fscanf(fp, "%d%d%.2f", &pnum, &quan, &price)
	while(!feof(fp)){
			fread(&pnum, sizeof(int), 1, fp);
			fread(&quan, sizeof(int), 1, fp);
			fread(&price, sizeof(float), 1, fp);
			if(!feof(fp)){
			printf("%5d\t%8d\t$%9.2f\n", pnum, quan, price);
			}
	}
	fclose(fp);
	return 0;
}
