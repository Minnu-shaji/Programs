#include<stdio.h>
void bubblesort(int a[],int n)
{
	int i,j,temp;
//	n=sizeof(a)/sizeof(a[0]);
//	printf("%d",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	printf("BUBBLE SORT: \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
void insertionsort(int a[],int n)
{
	int i,j,key;
	for(j=1;j<n;j++)
	{
		i=j-1;
		key=a[j];
		{
			while(i>=0 && a[i]>key)
			{
				a[i+1]=a[i];
				i--;
			}
			a[i+1]=key;
		}
	}
	printf("\ninsertion SORT: \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
void selectionsort(int a[],int n)
{
	int i,min,imin,temp,j;
	for(i=0;i<n;i++)
	{
		min=a[i];
		imin=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				imin=j;
			}
		}
		temp=a[imin];
		a[imin]=a[i];
		a[i]=temp;
	}
	printf("\nSELECTION SORT: \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
void merge(int a[],int p,int q,int r)
{
	int n1,n2,l[20],ri[20],i,j,k=0;
	n1=q-p+1;
	n2=r-q;
	for(i=p;i<=q;i++)
	{
		l[k]=a[i];
	}
	k=0;
	for(j=q;j<=r;j++)
	{
		ri[k]=a[j];
	}
	i=0;
	j=0;
	for(k=p;k<r;k++)
	{
		if(l[i]<ri[j])
		{
			a[k]=l[i];
			i++;
		}
		else
		{
			a[k]=ri[j];
			j++;
		}
	}
}

void mergesort(int a[],int f,int l)
{
	int m,i;
	if(f<l)
	{
		m=(f+l)/2;
	//	printf("m= %d",m);
		mergesort(a,f,m);
		mergesort(a,m+1,l);
		merge(a,f,m,l);

	}
}
void quicksort(int a[],int f,int l)
{
	int i,j,temp,pivot;
	if(f<l)
	{
	
	i=f+1;
	j=l;
	pivot=a[f];
	while(i<j)
	{
		while( a[i]<=pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
	
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	}
	temp=a[f];
	a[f]=a[j];
	a[j]=temp;
	quicksort(a,f,j-1);
	quicksort(a,j+1,l);
	}

}
void main()
{
	int a[10],n,i,b[10],c[10],d[10],e[10];
	printf("\nENTER THE NUMBER OF ELEMENTS: ");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
		c[i]=a[i];
		d[i]=a[i];
		e[i]=a[i];
	
	}
	bubblesort(a,n);
	insertionsort(b,n);
	selectionsort(c,n);
	mergesort(d,0,n-1);
	printf("\nmerge SORT: \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",d[i]);
	}
	quicksort(e,0,n-1);
	printf("\nQUICK SORT: ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",e[i]);
		
	}
}
