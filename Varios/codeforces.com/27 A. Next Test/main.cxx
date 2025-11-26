/* problem: A. Next Test
 * code: 27
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, d;
	int v[3001];
	memset(v,0,sizeof(v));
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>d;
		v[d]=1;
	}
	for(int k=1;k<=3000;k++)
	{
		if(v[k]==0)
		{
			cout<<k;
			return 0;
			break;
		}
	}
	cout<<"3001";
	return 0;
}

