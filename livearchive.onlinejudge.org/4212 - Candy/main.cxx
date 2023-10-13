/*   Problem: 4212 - Candy
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: DP
 */

#include <bits/stdc++.h>

using namespace std;

long long solve(vector<long long> v, int n)
{
	vector<long long> b;
	for(int k=0;k<n;k++)
	{
		b.push_back(v[k]);
		if(k>=2)
		   b[k]+=b[k-2];
		if(k>=1 && b[k-1]>b[k])
		    b[k]=b[k-1];
	}
	return b[n-1];
}

int main(int argc, char **argv)
{
	
	int m,n;	
	long long d;
	vector<long long> c;
	vector<long long> r;
	while(cin>>m>>n && (m||n))
	{
		for(int k=0;k<m;k++)
		{
			for(int i=0;i<n;i++)
			{
			   cin>>d;	
			   c.push_back(d);
			}			
			r.push_back(solve(c,n));			
			c.clear();
		}
		cout<<solve(r,m)<<endl;
		r.clear();
	}
	
	return 0;
}

