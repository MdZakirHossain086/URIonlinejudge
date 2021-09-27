#include<stdio.h>

int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/365;
	printf("%d ano(s)\n",a);	
	b=(n-(a*365))/30;
	printf("%d mes(es)\n",b);
	c=(n-(a*365))%30;
	printf("%d dia(s)\n",c);	
	return 0;
	}
