
#include<stdio.h>
int main()
{
int product1_code,product1_unit;
int product2_code,prduct2_unit;
float prduct1_price,prduct2_price,all_paid;
scanf("%d %d %.2f\n",&product1_code,&product1_unit,&prduct1_price);
scanf("%d %d %.2f\n",&product2_code,&product2_unit,&prduct2_price);
all_paid=product1_unit*prduct1_price+product2_unit*prduct2_price;
printf("VALOR A PAGAR: R$ %.2f",all_paid);
return 0;
}
