/*   Problem: 3470 - Pascal Library
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Pending
 *   type: Math
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, d, v[100],t;
	bool flag;
	while(cin>>n>>d && (n || d))
	{
		flag=false;
		memset(v,0,sizeof(v));
		for(int k=0;k<d;k++)
		{
			for(int i=0;i<n;i++)
			{
				cin>>t;
				v[i]+=t;
				if(v[i]==d)
				{
				  flag=true;
			    }
			}
		}
		
		if(flag)
		  cout<<"yes"<<endl;
		else
		  cout<<"no"<<endl;
	}
	return 0;
}

