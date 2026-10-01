#include<stdio.h>
#include<conio.h>
void main()
{
int matrix1 [2][2],matrix2 [2][2],result[2][2];
int i,j,k;
clrscr();
printf("enter element of the first 2*2 matrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("enter element matrix 1[%d] [%d]:",i,j);
scanf("%d",&matrix1[i][j]);
}
}
printf("\n enter elements of the second 2*2 matrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("enter element matrix 2 [%d][%d]:",i,j);
scanf("%d",&matrix2[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
result [i][j]=0;
for(k=0;k<2;k++)
{
result [i][j] += matrix1 [i][k]* matrix2 [k][j];
}
}
}
printf("\n product of the matrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",result [i][j]);
}
printf("\n");
}
getch();
}