/*  Problem: 1113 - Tri Tiling
 *  Site: coj.uci.cu
 *  Status: Pending
 *  Type: math
 */


#include <bits/stdc++.h>

using namespace std;

long long v[31];

long long f(int n)
{
	if(n==0) return v[0];
	if(n==1) return v[1];
	if(v[n]!=0)
	   return v[n];
	v[n]=4*f(n-1)-f(n-2);
	return v[n];   
}

int main(int argc, char **argv)
{
	memset(v,0LL,sizeof(v));
	v[0]=1;
	v[1]=1;	
	int n;
	while(cin>>n)
	{
		cout<<f(n)<<endl;
	}
	
	return 0;
}

