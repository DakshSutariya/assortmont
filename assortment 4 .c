#include<stdio.h>

main()
{
	int a[100][100],b[100][100],sum[100][100],i,j,r,c;
	
	printf("enter the nomber of rows=");
	scanf("%d",&r);
	printf("enter the nomber of columns=");
	scanf("%d",&c);
	
	
   printf("enter 1st matrix =\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   scanf("%d",&a[i][j]);
    }
   }
   
   printf("enter 2nd matrix =\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   scanf("%d",&b[i][j]);
    }
   }
   
   printf("1st matrix =\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   printf("%d ",a[i][j]);
    }
    printf("\n");
   }
   
   printf("2nd matrix =\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   printf("%d ",b[i][j]);
    }
    printf("\n");
   }
   
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	  sum[i][j]=a[i][j]+b[i][j];
    }
    
   }
   
   printf(" sum of both the matrix =\n");
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   printf("%d ",sum[i][j]);
    }
    printf("\n");
    
   }
   
   
}

