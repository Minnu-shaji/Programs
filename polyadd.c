#include<stdio.h>
struct poly
{
	int coeff;
	int exp;
}a[20],b[20],c[20]={0};
void polyadd(int n,int m)
{
	printf("%d %d",m,n);
	int i=0,j=0,k=0;
	while(i<n&&i<m)
	{
		if(a[i].exp==b[j].exp)
		{
			c[k].exp=a[i].exp;
			c[k].coeff=a[i].coeff+b[j].coeff;
			i++;
			j++;
			k++;
		}
		if(a[i].exp>b[j].exp)
		{
			c[k].exp=a[i].exp;
			c[k].coeff=a[i].coeff;
			i++;
			k++;
		}
		if(a[i].exp<b[j].exp)
		{
			c[k].exp=b[j].exp;
			c[k].coeff=b[j].coeff;
			j++;
			k++;
		}
	}
	while(i<n)
	{
			c[k].exp=a[i].exp;
			c[k].coeff=a[i].coeff;
			i++;
			k++;
	}
	while(j<m)
	{
			c[k].exp=b[j].exp;
			c[k].coeff=b[j].coeff;
			j++;
			k++;
	}
		printf("\n----------------------------------\n");
	for(i=0;i<k;i++)
	{
		printf("|    %d        |       %d      |\n",&c[i].coeff,&c[i].exp);
	
	}
	printf("----------------------------------\n");
}
int main()
{
	int n,i,m;
	printf("ENTER THE NO OT TERMS(1): ");
	scanf("%d",&n);
	printf("ENTER THE POLYNOMIAL: (COEEF,EXP)");
	for (i=0;i<n;i++)
	{
		scanf("%d%d",&a[i].coeff,&a[i].exp);
	}
	printf("ENTER THE NO OT TERMS(2): ");
	scanf("%d",&m);
	printf("ENTER THE POLYNOMIAL: (COEEF,EXP)");
	for (i=0;i<m;i++)
	{
		scanf("%d%d",&b[i].coeff,&b[i].exp);
	}
	polyadd(n,m);

}

