/* Problem: Coprimes
 * Code: 1050
 * Site:coj.uci.cu
 * Status: Accepted
 * Type: Math
 * */

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	while(b>0)
	{
		a=a%b;
		a^=b;
		b^=a;
		a^=b;
	}
	return a;
}

int main(int argc, char **argv)
{
	int n,cantidad=0;
	cin>>n;
	for(int k=1;k<n;k++)
	{
		if(gcd(n,k)==1)
		   cantidad++;
	}
	cout<<cantidad<<endl;
	return 0;
}

