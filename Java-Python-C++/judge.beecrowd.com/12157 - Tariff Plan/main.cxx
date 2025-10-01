/*  Problem: 12157 - Tariff Plan
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Simulacion
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t,n,s;
	int m,j;
	cin>>t;
	for(int c=1;c<=t;c++)
	{
		cin>>n;
		m=0;
		j=0;
		for(int k=0;k<n;k++)
		{
			cin>>s;
			m=m+(10*(s/30)+10);
			j=j+(15*(s/60)+15);
		}
		cout<<"Case "<<c<<": ";
		if(m==j)
		   cout<<"Mile Juice "<<m;
		else if(m>j)
		   cout<<"Juice "<<j;
		else
		   cout<<"Mile "<<m;
		cout<<endl;	
		
	}
	return 0;
}

