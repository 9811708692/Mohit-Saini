#include <stdio.h>
#include <conio.h>
void main()
{
    FILE*f1,*f2,*f3;
    int i, j;
    printf("Enter the data \n");
    f1=fopen("file1", "w");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&j);
        if(j==-1)break;
        putw(j,f1);
    }
    fclose(f1);
    f1=fopen("file1","r");
    f2=fopen("od","w");
    f3=fopen("ev","w");
    while((j=getw(f1))!=EOF)
    {
        if(j%2==0)
        putw(j,f3);
        else
        putw(j,f2);
    }
    fclose(f1);
    f1=fopen("file1","r");
    f2=fopen("od","w");
    f3=fopen("ev","w");
    while((j=getw(f1))!=EOF)
    {
        if(j%2==0)
        putw(j,f3);
        else
        putw(j,f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f2=fopen("od","r");
    f3=fopen("ev","r");
    printf("Contents of ODD File \n");
    while((j=getw(f2))!=EOF)
    printf("%4d \n",j);
    printf("Contents of EVEN File \n");
    while((j=getw(f3))!=EOF)
    printf("%4d \n",j);
    fclose(f2);
    fclose(f3);
    getch();
}

