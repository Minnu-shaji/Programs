#include<stdio.h>
int main()
{
	int a[80][80],m,n,i,j,f=0;
	printf("ENTER THE DIMENTIONS");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
	
		printf("ENTER THE DATA");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i!=j&&a[i][j]!=0)
				{
					f=1;
				}
			}
		}
		if(f==0)
		{
			printf("THE GIVEN MATRIX IS A DIAGONAL MATRIX");
		}
		else
		{
			printf("THE GIVEN MATRIX IS NOT DIAGONAL");
		}
	}
	else
	{
		printf("INVALID DIMENSIONS");
	}
	return 1;
}
