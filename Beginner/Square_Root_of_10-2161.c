#include<stdio.h>
int main()
{
    double root=0.0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        root=root+6.0;
        root=1/root;
    }
    root=root+3.0;
    printf("%.10lf\n",root);
    return 0;
}
