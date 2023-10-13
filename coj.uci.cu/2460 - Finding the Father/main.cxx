/*   Problem:Finding the Father
 *   Code: 2460
 *   Site: coj.uci.cu
 *   Status: Time Limit exced
 *   type: Math
 */
 


#include <iostream>
#include <cstdio>

using namespace std;

int ones(int n)
{
	int t=0;
	while(n>0)
	{
		t+=(n%2);
		n=n/2;
	}
	return t;
}

int main(int argc, char **argv)
{
	int t,o,n;
	while(cin>>t)
	{
		o=ones(t);
		n=0;
		while(o!=n)
		{
			t++;
			n=ones(t);
	    }
		cout<<t<<endl;
	}
	return 0;
}

