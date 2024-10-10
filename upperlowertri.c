#include<stdio.h>
int main()
{
	int a[80][80],i,j,m,n,l=0,u=0;
	printf("ENTER THE DIMENSIONS:");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("ENTER THE ELEMENTS:");
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
				if(j<i)
				{
					if(a[i][j]!=0)
					{
						u=1;
					}
				}
				else if(j>i)
				{
					if(a[i][j]!=0)
						l=1;
				}
			}
		}
		if(u==0)
			printf("THE GIVEN MATRIX IS UPPPER TRIANGLE MATRIX");
		else if(l==0)
			printf("THE GIVEN MATRIX IS LOWER TRIANGLE MATRIX");
		else
			printf("NEITHER UPPER NOR LOWER TRIANGLE MATRIX");
		}
	else
	{
		printf("INVALID DIMENSIONS");
	}
return 1;
}
			
			
