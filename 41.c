#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main( )
{
char *ch;
int *p;
float *f;
ch = (char*)malloc(sizeof(char));
    p = (int*)malloc(sizeof(int));
    f = (float*)malloc(sizeof(float));
printf("Enter a Character\n");
  *ch = getchar();                    //scanf("%c",ch);
printf("Enter an Integer\n");
scanf("%d",p);
printf("Enter a Float\n");
scanf("%f",f);
printf(" You entered \n%c %d %f",*ch,*p,*f);
free(ch);
free(p);
free(f);
 }
