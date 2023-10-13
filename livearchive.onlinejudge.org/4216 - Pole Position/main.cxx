/*   Problem: 4216 - Pole Position
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Math
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,c,p;
	int v[1001];
	bool flag;
	while(cin>>n && n)
	{		
		flag=true;
		memset(v,0,sizeof(v));
		for(int k=1;k<=n;k++)
		{
			cin>>c>>p;
			if((p+k)<1 || (p+k)>n)
			{
				flag=false;
			}
			if(flag && v[p+k]==0)
			{
				v[p+k]=c;
			}
			else
			{
				flag=false;
			}
		}
		if(flag)
		{
	     bool sw=false;
		 for(int k=1;k<=n;k++)
		 {
			 if(sw)
			   cout<<" ";
			 sw=true;
			cout<<v[k];
		 }
	    }
	    else
	       cout<<"-1";
		cout<<endl;
	}
	return 0;
}

