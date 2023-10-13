/*  Problem: 10050 - Hartals
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Ad-hoc - Array
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t, n,p,h,r;
	int v[3651];
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		memset(v,0,sizeof(v));
		r=0;
		for(int k=0;k<p;k++)
		{
			cin>>h;
			for(int j=h;j<=n;j+=h)
			{
				v[j]=1;
				
			}			
		}		
		for(int k=1;k<=n;k++)
		{
			if((k+1)%7!=0 && k%7!=0)
			{
			   r+=v[k];
			}
		}
		cout<<r<<endl;
	}
	return 0;
}

