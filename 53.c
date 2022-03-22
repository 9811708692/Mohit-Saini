#include<ctype.h>
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    int f;
    enum  etype{
        letter, digit, other
    };
    printf("\n Enter any character: ");
    ch=getch();
    f=isalpha(ch);
    if(f!=0){
        printf("%c is type %d symbol",ch,letter);
    }
     else{
         f=isdigit(ch);
     if (f!=0){
         printf("\n%c is type %d symbol",ch,digit);
     }
         else{
    printf("\n%c is type %d symbol",ch,other);
     }
     }    
    }

