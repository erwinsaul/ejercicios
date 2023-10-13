/*   Problem: 471 Dangerous Dive
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,m,d;	
	vector<int> r;
	while(cin>>n>>m)
	{
		vector<int> v(n+1,0);
		for(int k=0;k<m;k++)
		{
			cin>>d;
			v[d]=1;
		}
		for(int k=1;k<=n;k++)
		{
			if(v[k]==0)
			  r.push_back(k);
		}
		
		if(r.size()==0)
		   puts("*");
		else
		{
			for(int k=0;k<(int)r.size();k++)
			{
				cout<<r[k]<<" ";
			}
			cout<<endl;			
		}
		r.clear();
	}
	return 0;
}

