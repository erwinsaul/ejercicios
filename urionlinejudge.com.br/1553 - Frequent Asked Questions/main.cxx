/* problem: Frequent Asked Questions
 * code: 1553
 * site: www.urionlinejudge.com.br
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, k, t, r;
	int v[101];
	while(cin>>n>>k && (n||k))
	{
		memset(v, 0, sizeof(v));
		r=0;
		for(int j=0;j<n;j++)
		{
			cin>>t;
			v[t]++;
		}
		for(int j=1;j<=100;j++)
		{
			if(v[j]>=k)
			   r++;
		}
		cout<<r<<endl;
	}
	return 0;
}

