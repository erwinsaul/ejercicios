/*  Problem:  Amusement Park
 *  Code: 1796
 *  Site: acm.timus.ru
 *  Type: Ad-Hoc / Simulacion
 *  Status : Accepted
 */       


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int precio[6]={10,50,100,500,1000,5000};
	int a,s=0, ticket, max, t, min;
	int menor=999999;
	for(int k=0;k<6;k++)
	{
		cin>>a;
		s=s+a*precio[k];
		if(a!=0&&precio[k]<menor)
		   menor=precio[k];
	}
	cin>>ticket;
	max=s/ticket;
	min=((s-menor)/ticket)+1;
	t=max-min+1;
	cout<<t<<endl;
	for(int k=0;k<t;k++)
	{
		cout<<(min+k)<<" ";
	}
	return 0;
}

