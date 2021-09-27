#include<stdio.h>
int main()
{
    int i,j,da,dd,dl,ga,gd,gl,n,m,wind,wing;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        scanf("%d%d%d",&da,&dd,&dl);
        scanf("%d%d%d",&ga,&gd,&gl);
        if(dl%2==0)
            wind=(da+dd+2*m)/2;
        else
            wind=(da+dd)/2;
        if(gl%2==0)
            wing=(ga+gd+2*m)/2;
        else
            wing=(ga+gd)/2;

        if(wind>wing)
            printf("Dabriel\n");
        else if(wind<wing)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }
    return 0;
}
