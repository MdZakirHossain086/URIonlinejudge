#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        int x,y;
        cin>>x>>y;
        int p=x+y;
        if(p==0)
            cout<<"PROXYCITY"<<endl;
        else if(p==1)
            cout<<"P.Y.N.G."<<endl;
        else if(p==2)
            cout<<"DNSUEY!"<<endl;
        else if(p==3)
            cout<<"SERVERS"<<endl;
        else if(p==4)
            cout<<"HOST!"<<endl;
        else if(p==5)
            cout<<"CRIPTONIZE"<<endl;
        else if(p==6)
            cout<<"OFFLINE DAY"<<endl;
        else if(p==7)
            cout<<"SALT"<<endl;
        else if(p==8)
            cout<<"ANSWER!"<<endl;
        else if(p==9)
            cout<<"RAR?"<<endl;
        else if(p==10)
            cout<<"WIFI ANTENNAS"<<endl;
    }
    return 0;
}
