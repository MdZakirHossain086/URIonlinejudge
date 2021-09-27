#include<stdio.h>
void main(){
    int number,hours;
    double ammount,SALARY;
    scanf("%d%d%lf",&number,&hours,&ammount);
    SALARY=hours*ammount;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",number,SALARY);
}
