#include<stdio.h>
int main()
{
    double a,i,j=0;
    int c=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&a);
        if(a>0){
            j=j+a;
            c++;
        }
    }
    printf("%d valores positivos\n",c);
    printf("%.1lf\n",j/c);

    return 0;
}

