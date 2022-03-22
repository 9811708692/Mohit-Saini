#include<stdio.h>

int main(){
    int arr[5];
    int Sum=0,*p,i,j=0;
    printf("Enter 5 element You Want To Sum \n");
    for ( i = 0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    while (j<5)
    {
        printf(" \n%d. %d",j,*p);
        Sum = Sum+*p;
        j++;
        p++;
    }
    printf("\n Sum Of All Elements = %d ",Sum);    
    return 0;
}
