#include<stdio.h>
int main()
{
	int a[80][80],i,j,m,n,f=0,z=0,u=0;
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
				if(a[i][j]!=0)
				{
					z=1;
					if(i!=j)
					{
						f=1;
						
					}
				}
				if(a[i][j]!=1)
				{
					u=1;
					if(i==j)
					{
						f=1;
					}
				}
				
			}
		
		}
		if(z==0)
		{
			printf("THE GIVEN MATRIX IS ZERO MATRIX");
		}
		else if(u==0)
		{
			printf("THE GIVEN MATRIX IS UNITY MATRIX");
		}
		else if(f==0)
		{
			printf("THE GIVEN MATRIX IS IDENTITY MATRIX");
		}
		else
			printf("NEITHER IDENTITY NOR UNITY NOR ZERO MATRIX");
	
	}
	else
	{
		printf("INVALID DIMENSIONS");
	}
return 1;
}
