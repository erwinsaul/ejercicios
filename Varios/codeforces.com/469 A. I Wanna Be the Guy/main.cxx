/* problem: A. I Wanna Be the Guy
 * code: 469
 * site: codeforces.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	int v[101],n,p,d;
	memset(v,0,sizeof(v));
	cin>>n;
	cin>>p;
	while(p--)
	{
		cin>>d;
		v[d]=1;
	}
	cin>>p;
	while(p--)
	{
		cin>>d;
		v[d]=1;
	}
	
	for(int k=1;k<=n;k++)
	{
		if(v[k]==0)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
}

