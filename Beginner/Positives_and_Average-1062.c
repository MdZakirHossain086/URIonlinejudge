#include<stdio.h>
int main()
{
    double a,i,c=0,j=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf\n",&a);
        if(a>0){
            j=j+a;
            c++;
        }
    }
    printf("%lf valores positivos",c);
    printf("Average=%lf",j/c);
      return 0;
}

