include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char text[30];
fp=fopen("Text.txt","w");
printf("enter text in the file \n");
gets(text);
fprintf(fp,"%s",text);
fclose(fp);
}

