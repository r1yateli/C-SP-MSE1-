#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	char ch;

	clrscr();

	printf("Enter a single character:");
	scanf("%c", &ch);

	if (isupper(ch))
	{
		printf("'%c' is an uppercase alphabet.\n", ch);
	}
	else if (islower(ch))
	{
		printf("'%c' is a lowercase alphabet.\n", ch);
	}
	else if (isdigit(ch))
	{
		printf("'%c' is a digit.\n", ch);
	}
	else
	{
		printf("'%c' is a special symbol.\n", ch);
	}

	getch();

}
