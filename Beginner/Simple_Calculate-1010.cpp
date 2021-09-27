#include<stdio.h>
int main()
{
  	double product1();
	double product2();
	printf("VALOR A PAGAR: R$ %.2lf\n",product1()+product2());
	return 0;
}
double product1()
{
	int code,unit;
	double price;
	scanf("%d%d%lf",&code,&unit,&price);
	return(unit*price);
}
double product2()
{
	int code,unit;
	double price;
	scanf("%d%d%lf",&code,&unit,&price);
	return(unit*price);
}

