#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr1, *fptr2;
    char filename[20], ch;
    int n, lineno = 1;
 
    printf("Enter file name: ");
    gets(filename);
    fptr1 = fopen(filename, "r");
    if(fptr1==NULL)
    {
    	printf("error");
    	exit(1);
	}
    ch = getc(fptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fptr1);
    }
    rewind(fptr1);
    printf("\nEnter number of line you want to delete:");
    scanf("%d", &n);
    fptr2 = fopen("copy.c", "w");
    ch = getc(fptr1);
    while (ch != EOF)
    {
        ch = getc(fptr1);
        if (ch == '\n')
            lineno++;
            if (lineno != n)
            {
                putc(ch, fptr2);
            }
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(filename);
    rename("copy.c", filename);
    printf("\nContents of file after deleting line %d:\n",n);
    fptr1 = fopen(filename, "r");
    ch = getc(fptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fptr1);
    }
    fclose(fptr1);
    return 0;
}
