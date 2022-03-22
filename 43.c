#include <stdio.h>
int main()
{
//fill your code
int m, n;
scanf(“%d %d”,&m,&n);
int i, j;
int mat1[m][n], mat2[m][n], mat3[m][n];
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
scanf(“%d”,&mat1[i][j]);
}

