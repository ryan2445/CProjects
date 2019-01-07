//Ryan Hoffan - CS135 Project 9 - dynamic_strings.c
#include <stdio.h>
#include <stdlib.h>

int strlength(char *s);
int strcomp(char *s1, char *s2);
char *strconcat(char *s1, char *s2);
char *strcopy(char *s1, char *s2);

int main(int argc, char *argv[]){

	int n=atoi(argv[1]);
	int len[n];
	printf("Enter the length of string 1: ");
	scanf("%d", &len[0]);
	printf("Please enter string 1: ");
	char *s1=malloc(len[0]*sizeof(char)+1);
	scanf("%s", s1);

	printf("Enter the length of string 2: ");
	scanf("%d", &len[1]);
	printf("Please enter string 2: ");
	char *s2=malloc(len[1]*sizeof(char)+1);
	scanf("%s", s2);

	printf("Enter the length of string 3: ");
	scanf("%d", &len[2]);
	printf("Please enter string 3: ");
	char *s3=malloc(len[2]*sizeof(char)+1);
	scanf("%s", s3);

	printf("Enter the length of string 4: ");
	scanf("%d", &len[3]);
	printf("Please enter string 4: ");
	char *s4=malloc(len[3]*sizeof(char)+1);
	scanf("%s", s4);

	printf("Enter the length of string 5: ");
	scanf("%d", &len[4]);
	printf("Please enter string 5: ");
	char *s5=malloc(len[4]*sizeof(char)+1);
	scanf("%s", s5);

	printf("Your strings are: \n");
	printf("String number 1 - \"");
	for(int i=0;i<strlength(s1);i++){
		printf("%c", s1[i]);
	}
	printf("\"\n");
	printf("String number 2 - \"");
	for(int i=0;i<strlength(s2);i++){
		printf("%c", s2[i]);
	}
	printf("\"\n");
	printf("String number 3 - \"");
	for(int i=0;i<strlength(s3);i++){
		printf("%c", s3[i]);
	}
	printf("\"\n");
	printf("String number 4 - \"");
	for(int i=0;i<strlength(s4);i++){
		printf("%c", s4[i]);
	}
	printf("\"\n");
	printf("String number 5 - \"");
	for(int i=0;i<strlength(s5);i++){
		printf("%c", s5[i]);
	}
	printf("\"\n");
	char *p[5]={s1, s2, s3, s4, s5};
	int option;
	int snum;
	int snum2;
	int snum3;
	int source;
	int destination;
	int source2;
	int destination2;
	do{
		printf("1 – Find string length\n");
		printf("2 – Compare strings\n");
		printf("3 – Copy strings\n");
		printf("4 – Concatenate strings\n");
		printf("5 – Quit\n");
		printf("Please enter your option: ");
		scanf("%d", &option);
		switch(option){
			case 1:
			printf("Enter a string number: ");
			scanf("%d", &snum);
			printf("The length of string %d is: %d\n", snum, len[snum-1]);
			break;
			case 2:
			printf("Enter the number of the first string: ");
			scanf("%d", &snum2);
			printf("Enter the number of the second string: ");
			scanf("%d", &snum3);
			if(strcomp(p[snum2-1], p[snum3-1])==1){
				printf("String %d comes before string %d alphabetically.\n", snum2, snum3);
			}
			if(strcomp(p[snum2-1], p[snum3-1])==-1){
				printf("String %d comes before string %d alphabetically.\n", snum3, snum2);
			}
			if(strcomp(p[snum2-1], p[snum3-1])==0){
				printf("The strings are the same.\n");
			}
			break;
			case 3:
			printf("Enter the number of the source string: ");
			scanf("%d", &source);
			printf("Enter the number of the destination string: ");
			scanf("%d", &destination);
			strcopy(p[source-1], p[destination-1]);
			break;
			case 4:
			printf("Enter the source string: ");
			scanf("%d", &source2);
			printf("Enter the destination string: ");
			scanf("%d", &destination2);
			strconcat(p[source2-1], p[destination2-1]);
			break;
			case 5:
			exit(1);
			break;
		}
	printf("Your strings are: \n");
	printf("String number 1 - \"");
	for(int i=0;i<strlength(s1);i++){
		printf("%c", s1[i]);
	}
	printf("\"\n");
	printf("String number 2 - \"");
	for(int i=0;i<strlength(s2);i++){
		printf("%c", s2[i]);
	}
	printf("\"\n");
	printf("String number 3 - \"");
	for(int i=0;i<strlength(s3);i++){
		printf("%c", s3[i]);
	}
	printf("\"\n");
	printf("String number 4 - \"");
	for(int i=0;i<strlength(s4);i++){
		printf("%c", s4[i]);
	}
	printf("\"\n");
	printf("String number 5 - \"");
	for(int i=0;i<strlength(s5);i++){
		printf("%c", s5[i]);
	}
	printf("\"\n");

	}while(option!=5);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
}

int strlength(char *s){
	int count=0;
	for(;*s!='\0';s++){
		count++;
	}
	return count;
}
int strcomp(char *s1, char *s2){
	while((*s1!='\0')||(*s2!='\0')){
	char s3=*s1;
	char s4=*s2;
	if(s3>=65&&s3<=90){
		s3+=32;
	}
	if(s4>=65&&s4<=90){
		s4+=32;
	}
	if(s3<s4){
		return 1;
	}
	else if(s3>s4){
		return -1;
	}
	s1++;
	s2++;
	}
	return 0;
}
char *strconcat(char *s1, char *s2){
	realloc(s2, sizeof(s2)+sizeof(s1)*sizeof(char));
	int count=0;
	for(;*s2!='\0';s2++){
		count++;
	}
	for(;*s1!='\0';s1++){
		*s2=*s1;
		s2++;
		count++;
	}
	*s2='\0';
	s2=s2-count;
	return s2;
}
char *strcopy(char *s1, char *s2){
	realloc(s2, sizeof(s1)*sizeof(char)+1);
	while(*s2++ = *s1++){

	}
	// int count=0;
	// for(;*s2!='\0';s2++){
	// 	*s2=*s1;
	// 	s1++;
	// 	count++;
	// }
	// *s2='\0';
	// s2=s2-count;
	// return s2;
}