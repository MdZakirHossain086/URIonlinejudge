#include<stdio.h>
int main()
{
	double a,b,c,perimeter,area ;
	scanf("%lf%lf%lf",&a,&b,&c);

		if(a+b>c&&a+c>b&&c+b>a){

			perimeter=a+b+c;
			printf("Perimetro = %.1lf\n",perimeter);
	}
	else{
	area=.5*(a+b)*c;
	printf("Area = %.1lf\n",area);
}
	return 0;
}
