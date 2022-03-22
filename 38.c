#include<stdio.h>
int main(){
    int rows, number=1;
    printf("Enter Your Rows You Want To Print Pyramid \n");
    scanf("%d",&rows);
    for (int i = 0 ; i<=rows; i++)
    {
        for (int k = 0; k<=rows-i; k++){    printf(" ");    }
        for (int j = 0; j <=(1*i-1); j++){    printf(" %d ",number);  ++number;    }
        printf(" \n ");
    }
    return 0;
}
