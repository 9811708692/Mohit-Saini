#include<stdio.h>
int main(){
    int n, a, b, c, d, e;
    printf("This Program Give Reverse Of Five Digit Number \n");
    printf("Enter Five Digit Num =  \n");
    scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e= n/10000;
    printf("This Is Reverse Number Of Given By User = %d %d %d %d %d",a,b,c,d,e);
    return 0;
}
