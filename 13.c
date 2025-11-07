#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    
    clrscr();
   
    printf("Enter any single character:\n");
    scanf("%c", &ch);
    
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("The character is a VOWEL.\n");
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character is a CONSONANT.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character is a DIGIT.\n");
    }
    else {
        printf("The character is a SPECIAL SYMBOL.\n");
    }
    
    getch();
    
}
