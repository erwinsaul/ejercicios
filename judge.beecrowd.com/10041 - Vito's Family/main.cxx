/*  Problem: 10041 - Vito's Family
 *  Site: uva.onlinejudge.org
 *  Status:Accepted
 *  Type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t,r,m,sum;
	cin>>t;
	int v[500];
	while(t--)
	{
		cin>>r;		
		m=INT_MAX;
		for(int k=0;k<r;k++)
		   cin>>v[k];
		for(int k=0;k<r;k++)
		{
			sum=0;
			for(int j=0;j<r;j++)
			   sum=sum+fabs(v[k]-v[j]);
			m=min(m,sum);
		}
		cout<<m<<endl;
	}
	return 0;
}

