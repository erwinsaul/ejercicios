/*  Problem: 12527 - Different Digits
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int diferente(int n)
{
	int v[10];
	memset(v,0,sizeof(v));
	while(n>0)
	{
		if(v[n%10])
		   return 0;
		v[n%10]=1;
		n=n/10;   
	}
	return 1;
}

int main(int argc, char **argv)
{
	int v[5001];
	int n,m,r;
	memset(v,0,sizeof(v));
	for(int k=1;k<5001;k++)
	   v[k]=diferente(k);
	while(cin>>n>>m)
	{
		r=0;
		for(int k=n;k<=m;k++)
		{
			r=r+v[k];
		}
		cout<<r<<endl;
	}
	return 0;
}

