#include<stdio.h>
int sort(int ,int *);
int main(){
    int arr[10],i,n;
    printf("Enter How Much Element You Want To Short \n");
    scanf("%d",&n);
    printf("Enter Elements One By One \n");
    for (int i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }
    sort(n,arr);  
    for(i=0;i<n;i++)
    printf("\t%d",arr[i]);
    return 0;
}
int sort(int l, int*p){
    int i, j, temp;
    for ( i = 0; i< l; i++)
    for ( j = 0; j < l; j++)
    {
        if (*(p+j)>=*(p+j+1))
        {
            temp=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=temp;
        }
    }
    return 0;
}

