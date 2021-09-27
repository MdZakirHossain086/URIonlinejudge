#include<stdio.h>
void main()
{
    double salary,total_sale,total;
    char name;
    scanf("%s%lf%lf",&name,&salary,&total_sale);
    total=salary+(total_sale*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);
}
