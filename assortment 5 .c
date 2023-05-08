#include<stdio.h>

main()
{
    int r,c,i,j,arr[100][100],transpose[100][100];
	  
	printf("enter the nomber of rows=");
	scanf("%d",&r);
	printf("enter the nomber of columns=");
	scanf("%d",&c);
	
	printf("\nenter element of matrix =\n");
	for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   	   scanf("%d",&arr[i][j]);	  
    }
    
   }	  
	  
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   		transpose[j][i]=arr[i][j];
    }
   }	  
   
   printf("transpose of matrix =\n");
   	for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
	   printf("%d",transpose[i][j]);
    }
    printf("\n");
   }	  
}
