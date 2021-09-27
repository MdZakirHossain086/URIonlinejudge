#include<stdio.h>
int main()
{
    int n,i,x,total=0,t_c=0,t_r=0,t_s=0,amount;
    char ch;
    double a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&amount,&ch);
        if(ch=='C'){
            t_c+=amount;
        }
        else if(ch=='R'){
            t_r+=amount;
        }
        else if(ch=='S'){
            t_s+=amount;
        }
    }
    total+=t_c+t_r+t_s;
    a=(t_c*100.00)/total;
    b=(t_r*100.00)/total;
    c=(t_s*100.00)/total;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",total,t_c,t_r,t_s,a,b,c);
return 0;

}

