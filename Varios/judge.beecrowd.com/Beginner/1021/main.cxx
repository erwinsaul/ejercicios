/*  Problem: Age in Days
 *  Code: 1020
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int cant(double &n, double d)
{
	int c=0;
	while(n >= d)
	{
		c++;
		n=n-d;
	}
	
	return c;
}

int main(int argc, char **argv)
{
	double n;
	cin>>n;
	cout<<"NOTAS:"<<endl;
	cout<<cant(n,100.00)<<" nota(s) de R$ 100.00"<<endl;
	cout<<cant(n,50.00)<<" nota(s) de R$ 50.00"<<endl;
	cout<<cant(n,20.00)<<" nota(s) de R$ 20.00"<<endl;
	cout<<cant(n,10.00)<<" nota(s) de R$ 10.00"<<endl;
	cout<<cant(n,5.00)<<" nota(s) de R$ 5.00"<<endl;
	cout<<cant(n,2.00)<<" nota(s) de R$ 2.00"<<endl;	
	cout<<"MOEDAS:"<<endl;
	cout<<cant(n,1.00)<<" moeda(s) de R$ 1.00"<<endl;
	cout<<cant(n,0.50)<<" moeda(s) de R$ 0.50"<<endl;
	cout<<cant(n,0.25)<<" moeda(s) de R$ 0.25"<<endl;
	cout<<cant(n,0.10)<<" moeda(s) de R$ 0.10"<<endl;
	cout<<cant(n,0.05)<<" moeda(s) de R$ 0.05"<<endl;
	cout<<cant(n,0.01)<<" moeda(s) de R$ 0.01"<<endl;
	return 0;
}

