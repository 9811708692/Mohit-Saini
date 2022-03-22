#include<ctype.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int f;
enum ctype
{
letter,digit,other
};
printf("Enter any character: \n");
ch=getch();
f=isalpha(ch);
if(f!=0)
{
printf("\n%c is type %d symbol",ch,letter);
}
else
{
f=isdigit(ch);
}
if(f!=0)
{
printf("\n%c is type %d symbol",ch,digit);
}
else
{
printf("\n%c is type %d symbol",ch,other);
}
}

