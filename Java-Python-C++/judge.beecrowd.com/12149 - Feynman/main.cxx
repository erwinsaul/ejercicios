/*  Problem: 12149 - Feynman
 *  Site: uva.onlinejudge.org
 *  Status:pending
 *  Type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int v[101];

int solve(int k)
{
	if(k==0)
	   return 0;
	if(v[k])
	  return v[k];
	v[k]=k*k+solve(k-1);
	return v[k];
}

int main(int argc, char **argv)
{
	int n;
	memset(v,0,sizeof(v));
	v[0]=1;
	while(cin>>n && n)
	{
		cout<<solve(n)<<endl;
	}
	return 0;
}

