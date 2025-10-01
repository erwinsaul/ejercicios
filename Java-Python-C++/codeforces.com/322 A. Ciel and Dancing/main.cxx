/* problem: A. Ciel and Dancing
 * code: 322
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,m;
	cin>>n>>m;
	cout<<n+m-1<<endl;
	for(int k=1;k<=m;k++)
	{
		cout<<"1 "<<k<<endl;
	}
	for(int k=2;k<=n;k++)
	{
		cout<<k<<" 1"<<endl;
	}
	return 0;
}

