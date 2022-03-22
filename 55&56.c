# include <stdio.h>
# include <conio.h>
# include <process.h>
void main()
{
    FILE*fp;
    char ch;
    fp=fopen("data.dat", "wb");
    if(fp==NULL)
    {
        printf("file don't exist");
        exit(1);
    }
    printf("write data & to stop press (.) \n");
    while(ch!='.')
    {
        ch=getche();
        fputc(ch,fp);
    }
    fclose(fp);
    fp=fopen("data.dat","rb");
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}

