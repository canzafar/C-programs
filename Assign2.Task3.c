#include<stdio.h>
#include<string.h>
int pair(char str[], int n);
int main()
{
	int k,m;
	char string[20];
	printf("Enter a word: ");
	scanf("%s",&string);
	m=strlen(string);
	k= pair(string,m);
	printf("\n Total number of pairs of identical letters is %d",k);
}
int pair(char str[], int n)
{
	static int i=0, j=1, count=0;
	if(i==n)
	return(count);
	else
	{
		if(str[i]==str[j])
		{
			count++;
			i++;
			j++;
			pair(str,n);
		}
		else
		{
			i++;
			j++;
			pair(str,n);
		}
	}
}

