/*   Problem: 2144 - Saving the Fuel
 *   Code: 2144
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Ad-Hoc
 */



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n, d,t,r;
	int v[1000];
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>d>>s;
		for(int k=0;k<n;k++)
		   cin>>v[k];
		sort(v,v+n);
		r=0;
		if(s.compare("regulate")==0)
		{
			for(int k=0;k<d;k++)
			{
			   r+=v[n-k-1];	
			}
		}
		else
		{
			for(int k=0;k<d;k++)
			{
				r+=v[k];
			}
		}
		cout<<r<<endl;
	}
	return 0;
}

