#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g;
	long int N;
	cin>>N;
	cout<<N<<endl;
	a=N/100;
	cout<<a<<" "<<"nota(s) de R$ 100,00"<<endl;
	b=(N-(a*100))/50;
	cout<<b<<" "<<"nota(s) de R$ 50,00"<<endl;
	c=(N-(a*100)-(b*50))/20;
	cout<<c<<" "<<"nota(s) de R$ 20,00"<<endl;
	d=(N-(a*100)-(b*50)-(c*20))/10;
	cout<<d<<" "<<"nota(s) de R$ 10,00"<<endl;
	e=(N-(a*100)-(b*50)-(c*20)-(d*10))/5;
	cout<<e<<" "<<"nota(s) de R$ 5,00"<<endl;
	f=(N-(a*100)-(b*50)-(c*20)-(d*10)-(e*5))/2;
	cout<<f<<" "<<"nota(s) de R$ 2,00"<<endl;
	g=(N-(a*100)-(b*50)-(c*20)-(d*10)-(e*5)-(f*2))/1;
	cout<<g<<" "<<"nota(s) de R$ 1,00"<<endl;
	
	
}
