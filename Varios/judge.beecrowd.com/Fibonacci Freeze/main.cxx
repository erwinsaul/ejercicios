/* Problem:  Fibonacci Freeze
 * Code: 495
 * Site: uva.onlinejudge.org
 * Status: Pending
 */  

#include <iostream>

unsigned long fib(int n)
{
	unsigned long a=1,b=1,i,c;
	unsigned long aux=n;
	for(i=3;i<=aux;i++)
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
	int n;
	while(cin>>n)
	{
		cout<<"The Fibonacci number for "<<n<<" is "<<fib(n+1)<<endl;
	}
	return 0;
}

