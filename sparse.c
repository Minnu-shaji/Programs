#include<stdio.h>
struct parsem
{
	int row;
	int col;
	int value;
};
int main()
{
	int i,m,n,a[100][100],p[100][100],j,k=1,q=1,t1,t2;
	struct parsem b[50],t[50],sum[50];
//reading the matrix
	printf("Enter the dimensioms: ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
//converting to tuple form
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				b[k].row=i;
				b[k].col=j;
				b[k].value=a[i][j];
				k++;
				
			}
		}
	}
	b[0].row=m;
	b[0].col=n;
	b[0].value=k-1;
	
	//reading the matrix
	printf("Enter the dimensioms: ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
//converting to tuple form
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i][j]!=0)
			{
				t[k].row=i;
				t[k].col=j;
				t[k].value=a[i][j];
				k++;
				
			}
		}
	}
	t[0].row=m;
	t[0].col=n;
	t[0].value=k-1;
//addition
	t1=t[0].value;
	t2=b[0].value;
	n=t[0].col;
	m=t[0].row;
	i=1;
	j=1;
	k=1;
	while(i<t1&&j<t2)
	{
		if(t[i].row==b[j].row && t[i].col==b[j].col)
		{
			sum[k].row=t[i].row;
			sum[k].col=t[i].col;
			sum[k].value=t[i].value+b[j].value;
			i++;
			j++;
			k++;		
		}
		else if(t[i].row==b[j].row)
		{
			if(t[i].col<b[j].col)
			{
				sum[k].row=t[i].row;
				sum[k].col=t[i].col;
				sum[k].value=t[i].value;
				i++;
				k++;
				
			}
			else
			{
				sum[k].row=b[j].row;
				sum[k].col=b[j].col;
				sum[k].value=b[j].value;
				j++;
				k++;
			}
		}
		else
		{
			if(t[i].row<b[j].row)
			{
				sum[k].row=t[i].row;
				sum[k].col=t[i].col;
				sum[k].value=t[i].value;
				i++;
				k++;
			}
			else
			{
				sum[k].row=b[j].row;
				sum[k].col=b[j].col;
				sum[k].value=b[j].value;
				j++;
				k++;
			}
		}
	}
	while(i<=t1)
	{
		sum[k].row=t[i].row;
		sum[k].col=t[i].col;
		sum[k].value=t[i].value;
		i++;
		k++;
	}
	while(j<=t2)
	{
		sum[k].row=b[j].row;
		sum[k].col=b[j].col;
		sum[k].value=b[j].value;
		j++;
		k++;
	}
	sum[0].col=n;
	sum[0].row=m;
	sum[0].value=k;
	for(i=0;i<k;i++)
	{
		printf("%d\t%d\t%d\n",sum[i].row,sum[i].col,sum[i].value);
	}
	
	
	
	
//transpose
/*	n=b[0].value;
	t[0].row=b[0].col;
	t[0].col=b[0].row;
	t[0].value=n;
	if(n>0)
	{
		for(i=0;i<b[0].col;i++)
		{
			for(j=1;j<n;j++)
			{
				if(b[j].col==i)
				{
					t[q].row=b[j].col;
					t[q].col=b[j].row;
					t[q].value=b[j].value;
					q++;
				}
			}
		}
	}
	return 0;*/
	
	
	
	
}
