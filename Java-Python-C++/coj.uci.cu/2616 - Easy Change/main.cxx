/* problem: Easy Change
 * code: 2616
 * site: coj.uci.cu
 * status: pending
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	int t, n,r, k;
	int v[]={6,5,3,1};
	cin>>t;
	while(t--)
	{
		cin>>n;
		r=0;
		k=0;
		while(n>0)
		{
			if(n>=v[k])
			{
				r = r + n/v[k];
				n = n%v[k];
			}
			else
			{
				k++;
			}
		}
		cout<<r;
	}
	return 0;
}

