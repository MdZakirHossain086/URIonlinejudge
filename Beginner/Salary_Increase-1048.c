#include<stdio.h>
int main()
{
    float salary,new_salary,money_earn;
    scanf("%f",&salary);
    if(salary>=0&&salary<=400.00)
    {
        money_earn=(salary*15)/100.00;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earn);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>400.00&&salary<=800.00)
    {
        money_earn=(salary*12)/100.00;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earn);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>800.00&&salary<=1200.00)
    {
        money_earn=(salary*10)/100.00;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earn);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>1200.00&&salary<=2000.00)
    {
        money_earn=(salary*7)/100.00;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earn);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>2000.00)
    {
        money_earn=(salary*4)/100.00;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",money_earn);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
