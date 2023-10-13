/* problem: Elegant Numbers II
 * code: 2570
 * site: coj.uci.cu
 * status: TLE
 */
#include <bits/stdc++.h>

using namespace std;

int v[1000001];

int reverse(int n)
{
	int r=0;
	if(v[n]>0)
	   return v[n];
	while(n>0)
	{
		r = r*10 + n%10;
		n = n/10;
	}
	v[n] = r;
	return v[n];
}

int main(int argc, char **argv)
{
	int n, r;
	memset(v,0,sizeof(v));
	while(cin>>n)
	{
		r = reverse(n);
		if(r>n)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

