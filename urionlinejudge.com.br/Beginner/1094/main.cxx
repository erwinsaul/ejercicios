/*  Problem: Experiments
 *  Code: 1094
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */



#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n,t,total;
	int c,r,s;
	char o;
	double porciento;
	cin>>n;
	c=0;
	r=0;
	s=0;
	total=0;
	while(n--)
	{
		cin>>t;
		cin>>o;
		if(o=='C')
		{
			c+=t;
		}
		if(o=='R')
		{
			r+=t;
		}
		if(o=='S')
		{
			s+=t;
		}				
	}
	total=c+r+s;
	cout<<"Total: "<<total<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<c<<endl;
	cout<<"Total de ratos: "<<r<<endl;
	cout<<"Total de sapos: "<<s<<endl;
	porciento=((double)c*100.0)/(double)total;
	printf("Percentual de coelhos: %.2f ",porciento);putchar('%');putchar(10);
	porciento=((double)r*100.0)/(double)total;
	printf("Percentual de ratos: %.2f ",porciento);putchar('%');putchar(10);
	porciento=((double)s*100.0)/(double)total;
	printf("Percentual de sapos: %.2f ",porciento);putchar('%');putchar(10);
	return 0;
}

