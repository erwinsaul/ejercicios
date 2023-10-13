/*
 * Problem: 577 A. Multiplication Table
 * Site: codeforces.com
 * Status: Pending
 */
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	long long  n,x,a,r=0;
	cin>>n>>x;
	if(n==1 && x>1 )
	{
		cout<<"0";
	}	
	else if(x==1)
	{
		cout<<"1";
	}
	else
	{
		for(int k=2;k<=n;k++)
		{
			for(int j=1;j<=k;j++)
			{
				a=k*j;				
				if(x==a)
				{
					r+=2;
				}
			}
		}
		cout<<r;	
	}
	
	return 0;
}

