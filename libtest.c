#include <stdio.h>
#include "mylib.h"

int main(void){
	char str[]="This is a test string"; //21 chars
	int len;

	char dest[100];
	char src[] ="This is another test string";

	char c = '\0';
	char *result;

	int intResult;
	//char s1[] = "This is a cat";
	//char s2[] = "This is a dog";
	char s1[] = "This is a dog";
	char s2[] = "This is a cat";
	//char s1[] = "This is a cat";
	//char s2[] = "This is a cat";

	//len of null terminated str
	len=cstrlen(str);
	printf("The length is %d\n",len);

	//copies from src to dest
	cstrcpy(dest, src);
	printf("Copied: %s\n", dest);
	//src & dest say "This is another test string"

	//appends src to dest
	cstrcat(dest, src);
	printf("Catted: %s\n", dest);
	//dest should say "This is another test stringThis is another test string"

	//returns a char location within str
	result = cstrchr(str,c);
	printf("Found: %c\n", *result);
	//return first i - '\0' currently

	//less than, zero = match, greater than 
	intResult = cstrcmp(s1, s2);
	printf("Integer Results: %d\n", intResult);
	

	return 0;
}
