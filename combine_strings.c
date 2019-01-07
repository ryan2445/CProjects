//Ryan Hoffman - CS135 Project 9 - combine_strings.c
#include <stdio.h>
#include <stdlib.h>
#define N 30

char *widen_stars(char str1[], char str2[]);
int strcomp(char *s1, char *s2);
int strlength(char *s);
char *intersperse(char str1[], char str2[]);

int main(int argc, char *argv[]){
	if(strcomp(argv[1], "-w")==0){
	char str1[N];
	char str2[N];
	printf("Please enter a string of maximum 30 characters: ");
	fgets(str1, N, stdin);
	printf("Please enter a string of maximum 30 characters: ");
	fgets(str2, N, stdin);
	widen_stars(str1, str2);
	}
	if(strcomp(argv[1], "-i")==0){
	char str1[N];
	char str2[N];
	printf("Please enter a string of maximum 30 characters: ");
	fgets(str1, N, stdin);
	printf("Please enter a string of maximum 30 characters: ");
	fgets(str2, N, stdin);
	intersperse(str1, str2);
	}

}
char *intersperse(char str1[], char str2[]){
	str1[strlength(str1)-1]='\0';
	str2[strlength(str2)-1]='\0';
	char *str3 = malloc(60*sizeof(char));
	int count2=0;
	for(int i=0;i<(strlength(str2)+strlength(str1));i+=2){
		str3[i]=str1[count2];
		str3[i+1]=str2[count2];
		count2++;
	}
	for(int i=0;i<strlength(str3);i++){
		printf("%c", str3[i]);
	}
	if(str1[count2]=='\0'){
		for(int i=count2-1;i<strlength(str2);i++){
			printf("%c",str2[i]);
		}
	}
	if(str2[count2]=='\0'){
		for(int i=count2;i<strlength(str1);i++){
			printf("%c",str1[i]);
		}
	}
	printf("\n");
	free(str3);
}
char *widen_stars(char str1[], char str2[]){
	str1[strlength(str1)-1]='\0';
	str2[strlength(str2)-1]='\0';
	char *str3 = malloc(60*sizeof(char));
	int count=0;
	for(int i=0;i<strlength(str1)*2;i+=2){
			str3[i]=str1[count];
			str3[i+1]='*';
			count++;
	}
	int count2=0;
	for(int i=strlength(str1)*2;i<(strlength(str2)*2+strlength(str1)*2);i+=2){
		str3[i]=str2[count2];
		if(i+2==(strlength(str2)*2+strlength(str1)*2)){
			break;
		}
		str3[i+1]='*';
		count2++;
	}
	for(int i=0;i<strlength(str3);i++){
		printf("%c", str3[i]);
	}
	printf("\n");
	free(str3);
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