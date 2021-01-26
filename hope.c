#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void palindrome(char *, int l, int i);
int main()
{
	char word[20], *p;
	int l,i=0;
	printf("Enter a word: ");
	gets(word);
    fflush(stdin);
	l=strlen(word);
	p = &word[i];
	palindrome(p, l, i);
}
void palindrome(char *p, int l, int i)
{
	if(i= l/2)
	{
		printf("Palindrome");
	}
	else if( *(p+i) == *(p+l-1-i))
	{ 
	    i++;
	    palindrome(p, l, i);
	}
	else
	{
		printf("Not a Palindrome");
	}
}
