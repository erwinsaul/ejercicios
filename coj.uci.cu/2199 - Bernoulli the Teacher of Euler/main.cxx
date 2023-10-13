/*  Problem:    2199 - Bernoulli the Teacher of Euler
 *  Site: coj.uci.cu
 *  Status: Pending
 *  Type: Geometria
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t;
	double r,n,c;
	cin>>t;
	while(t--)
	{
		cin>>r>>n;
		c=r*sqrt(2.0-2.0*cos(360/n));
		cout<<c<<endl;
	}
	return 0;
}

