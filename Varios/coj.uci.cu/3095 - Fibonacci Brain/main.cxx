/* problem:  Fibonacci Brain
 * code: 3095
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>
#include <stdint.h>

using namespace std;

int main(int argc, char **argv)
{
	uint64_t fib[61], n;
	int r[61], p;
	fib[0]=0;
	fib[1]=1;
	r[1] = 1;
	for(int k=2;k<61;k++)
	{
		fib[k] = fib[k-1]+fib[k-2];
		r[k] = fib[k]%10;
	}
	while(cin>>n)
	{
		p = n%60;
		if(p==0)
		  cout<<"0"<<endl;
		else
		  cout<<r[p]<<endl;
	}
	/*for(int k=1;k<61;k++)
	{
		cout<<k<<" - "<<fib[k]<<" - "<<r[k]<<endl;
	}*/
	return 0;
}

