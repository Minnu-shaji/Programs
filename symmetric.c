#include<stdio.h>
int main()
{
	int a[80][80],n,m,i,j,f1=0,f2=0;
	printf("\nENTER THE DIMENSIONS:");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("\nENTER THE DATA");
		for (i=0;i<m;i++)
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
				if(a[i][j]!=a[j][i])
				{
					f1=1;
				}
				else if(a[i][j]!=-a[j][i])
				{
					f2=1;
				}
				
			}
		}
		if(f1==0)
		{
			printf("\nTHE GIVEN MATRIX IS SYMMETRIC");
		}
		else if(f2==0)
		{
			printf("\nTHE GIVEN MATRIX IS ANTISYMETRIC");
		}
		else
		{
			printf("\nNEITHER SYMMETRIC NOR ANTISYMMETRIC");
		}
	}
	else
	{
		printf("INAVLID DIMENSION");
	}
	return 1;
}
