#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
    LL n,x[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%lld",&x[i]);
    }
    for(i=0;i<10;i++){
        if(x[i]<=0)
            printf("X[%d]=1\n",i);
        else
            printf("X[%d]=%lld\n",i,x[i]);
    }
    return 0;

}
