#include <stdio.h>

main()
 {
    int arr[100][100],r,c,i,j,sum=0;

    printf("Enter number of rows=");
    scanf("%d",&r);
    printf("Enter number of columns=");
    scanf("%d",&c);
    printf("Enter matrix elements=\n");
    
    for(i=0;i<r;i++)
	 {
        for(j=0;j<c;j++) 
		{
            printf("a[%d][%d]=",i,j);
			scanf("%d", &arr[i][j]);
        }
    }

    for(i=0;i<r;i++) 
	{
      for(j=0;j<c;j++) 
		{
          if(i==j)
		   { 
              sum=sum+arr[i][j];
           }
        }
    }
     printf(" sum of diagonal elements of  matrix = %d\n", sum);
}


