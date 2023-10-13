/* Problem: The Sum
 * Code: 123
 * Site: http://acm.sgu.ru
 * Status: Accepted
 * */        
   


#include <iostream>

unsigned long long int fib(unsigned int n)
{
	unsigned long long int a=1, b=1,i,c;
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}

using namespace std;
int main(int argc, char **argv)
{
	int t;
	cin>>t;
	cout<<fib(t+3)-1;
	return 0;
}

