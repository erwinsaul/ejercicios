/*
 * Problem:500A - New Year Transportation 
 * Site: codeforces.com
 * Status: Accepted
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, t, x;
	cin>>n>>t;
	int v[n+1];
	for(int k=1;k<n;k++)
	{
		cin>>v[k];
	}
	x=1;
	while(x<t)
	{
		x=x+v[x];
	}
	if(x==t)
		cout<<"YES";
	else
		cout<<"NO";
	
	
	return 0;
}

