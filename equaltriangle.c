#include<stdio.h>
main()
{
int a,i,j,k;
printf("enter a number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("\n");
for(j=a;j>=i;j--)
printf(" ");
for(k=1;k<=i;k++)
printf("1 ");
}
}
