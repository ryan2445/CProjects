//Ryan Hoffman - CS135 - strings.c
#include <stdio.h>
#define MAX 256
int strlength(char *s);
int strcomp(char *s1, char *s2);
char *strconcat(char *s1, char *s2);
char *strcopy(char *s1, char *s2);
int main(){
	char s1[MAX];
	char s2[MAX];
	printf("Please enter the first string: ");
	scanf("%s", s1);
	printf("Please enter the second string: ");
	scanf("%s", s2);
	printf("The length of string 1 is: %d\n", strlength(s1));
	printf("The length of string 1 is: %d\n", strlength(s2));
	if(strcomp(s1, s2)==1){
		printf("String 1 comes before string 2 alphabetically.\n");
	}
	if(strcomp(s1, s2)==-1){
		printf("String 2 comes before string 1 alphabetically.\n");
	}
	if(strcomp(s1, s2)==0){
		printf("The strings are the same.\n");
	}
	strconcat(s1, s2);
	printf("String 1 after concatenation: %s\n", s1);
	printf("String 2 after concatenation: %s\n", s2);
	strcopy(s1, s2);
	printf("String 1 after copying: %s\n", s1);
	printf("String 2 after copying: %s\n", s2);
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
	int count=0;
	for(;*s2!='\0';s2++){
		*s2=*s1;
		s1++;
		count++;
	}
	*s2='\0';
	s2=s2-count;
	return s2;
}