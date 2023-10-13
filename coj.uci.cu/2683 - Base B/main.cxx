/* problem: Base B
 * code: 2683
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

string base(int n, int b)
{
	string s="";
	int d;
	while(n>0)
	{
		d = n%b;
		if(d>9)
		{
			d = d + 55;
		}
		else
		{
			d=d+48;
		}
		s.push_back((char)d);
		n=n/b;
	}
	return string(s.rbegin(), s.rend());
}

int main(int argc, char **argv)
{
	int t, n, b;
	cin>>t;
	while(t--)
	{
		cin>>n>>b;
		cout<<base(n,b)<<endl;
	}
	return 0;
}

