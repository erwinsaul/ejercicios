/* problem: Cumple
 * code: 20754
 * site: spoj.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t,n,m,x,r,k;
	vector<int> v;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>m;
		r=0;
		for(k=0;k<n;k++)
		{
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		k=0;
		while(m>=v[k])
		{
			m=m-v[k];
			r++;
			k++;
		}
		cout<<r<<endl;
		v.clear();
	}
	return 0;
}

