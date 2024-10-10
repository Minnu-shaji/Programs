
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
char st[50];
int n=50;
void push(char y);
char pop();
void eval(char a[])
{
	char x,rev[50],c,str[4];
	int i,m=0,n1=0,n2=0,stack[20];
	strrev(a);
	printf("%s",a);
	for(i=0;a[i]!='\0';i++)	
	{
		x=a[i];
		if(isalnum(x)==0)
		{
			c=pop();
			printf("%c",c);
			n2=atoi(c);
			printf("s is %d\n",n2);
			n1=atoi(pop());
			pop();
			switch(x)
			{
				case'+':
					m=n1+n2;
					push((char)m);
					break;
				case'-':
					m=n1-n2;
					push((char)m);
					break;
				case'*':
					m=n1*n2;
					push((char)m);
					break;
				case'/':
					m=n1/n2;
					push((char)m);
					break;
				case'^':
					m=n1^n2;
					push((char)m);
					break;
			}
		}
		else
		{
			str[0]=x;
			stack[++t]=atoi(str);
		}
		
	}
	printf("the solution is : %d",m);
}
void push(char y)
{
	if(top==n)
	{
		printf("stack overflow");
	}
	else
	{
		top++;
		st[top]=y;
	}
}

char pop()
{
	char x;
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
		x=st[top];
		top--;
		
	}
	return x;
}
int isp(char x)
{
	switch(x)
	{
	
		case '+':
		case '-':
			return 2;
			break;
		case '*':
		case '/':
			return 4;
			break;
		case '^':
			return 5;
			break;
	}
}

int icp(char x)
{
	switch(x)
	{
	
		case '+':
		case '-':
			return 1;
			break;
		case '*':
		case '/':
			return 3;
			break;
		case '^':
			return 6;
			break;
	}
}

int main()
{
	char exp[50],x,t,c,*e,new[50];
	int i=0,is,ic,j=0;
	printf("enter the expression: ");
	scanf("%s",exp);
	e=exp;
	while(*e!= '\0')
	{
		t=st[top];
		c=exp[i];
		if(isalnum(c))
		{
			printf("%c",c);
			new[j++]=c;
		}
		else if(c==')')
		{
			while(st[top]!='(')
			{
				x=pop();
				printf("%c",x);
				new[j++]=x;
			}
			pop();
		}
		else 
		{
			is=isp(t);
			ic=icp(c);
			if(isp>=icp)
			{
				while(is>=ic)
				{
					x=pop();
					if(x!='(')
					{
						printf("%c",x);
						new[j++]=x;
					}
				}
				push(c);
			}
			else
			{
				push(c);
			}
		}
		e++;
		i++;
			
	}
	while(top!=-1)
	{
		x=pop();
		if(x!='('||x!=')')
		{
		
			printf("%c",x);
			new[j++]=x;
		}
	}
	new[j]='\0';
	printf("\n");
	puts(new);
	memcpy(st,new,sizeof(new));
	printf("\n");
	puts(st);
	top=j-1;
	printf("%d",top);
	eval(st);
	
}

