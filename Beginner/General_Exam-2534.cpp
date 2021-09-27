#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,Q,p;
    while(cin>>N>>Q)
    {
        int n[N];
        for(int i=0;i<N;i++)
        {
            cin>>n[i];
        }
        sort(n,n+N,greater<int>());
        for(int i=0;i<Q;i++)
        {
            cin>>p;
            cout<<n[p-1]<<endl;
        }
    }
    return 0;
}
