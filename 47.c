#include<stdio.h>
int Recursion(int);
int main(){
    int num, fact;
    printf("Enter Your Number ");
    scanf("%d",&num);
   fact= Recursion(num);
    printf("Factorial Value Is %d",fact);
    return 0;
}
int Recursion(int x){
    int f;
    if (x==1)
    {
        return(1);
    }
    else{
        f = x * Recursion(x-1); // x=4 ,f=4*rec(3) //x=3 f = 3*recursion(2) // x = 2 f=2*recursion(1) 
    }
    return f;
}
