#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("input.txt","w");
    if(fp==NULL)
    {
        printf("Can not open file");
        exit(1);
    }
    printf("Write data & press '.' to stop press\n");
    while(ch!='.')
    {
        ch =getche();
        putc(ch,fp);
    }
    fclose(fp);
    printf("\nContent read");
    fp=fopen("Input.txt","r");
    while(feof(fp))
    {
      printf("%c",getc(fp));
    }
    return 0;
}
