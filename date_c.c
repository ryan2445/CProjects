#include <stdio.h>

int main(){
	int day1, day2, day3, day4;
	int month1, month2, month3, month4;
	int year1, year2, year3, year4;

	printf("Enter date 1 (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day1, &month1, &year1);
	printf("Enter date 2 (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day2, &month2, &year2);
	printf("Enter date 3 (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day3, &month3, &year3);
	printf("Enter date 4 (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day4, &month4, &year4);

	printf("Year\tMonth\tDay\n");
	printf("%04d\t%02d\t%02d\n", year1, month1, day1);
	printf("%04d\t%02d\t%02d\n", year2, month2, day2);
	printf("%04d\t%02d\t%02d\n", year3, month3, day3);
	printf("%04d\t%02d\t%02d\n", year4, month4, day4);


}