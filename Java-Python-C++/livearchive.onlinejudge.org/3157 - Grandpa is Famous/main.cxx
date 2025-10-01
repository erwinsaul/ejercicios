/*   Problem: 3157 - Grandpa is Famous
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Math
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,m,may,d;
	map<int,int> v;
	map<int,int>::iterator it;
	vector<int> mayor;
	while(cin>>n>>m && (n || m))
	{
		
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<m;i++)
			{
				cin>>d;
				v[d]++;				
			}
		}
		
		for(it=v.begin();it!=v.end();it++)
		{
			
			mayor.push_back((*it).second);
			
		}
		sort(mayor.begin(), mayor.end());
	    may=mayor[mayor.size()-2];		
		for(it=v.begin();it!=v.end();it++)
		{
			if((*it).second==may)
			{
				cout<<(*it).first<<" ";
			}
		}
		cout<<endl;		
		v.clear();
		mayor.clear();
	}
	
	return 0;
}

