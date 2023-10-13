/*   Problem: 15662. Moda
 *   Code: 15662
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Math
 */

#include <iostream>
#include <map>
#include <vector>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
	int n,t,mayor;
	map<int,int> m;
	map<int,int>::iterator it;
	vector<int> v;
	while(cin>>n && n)
	{
		mayor=INT_MIN;
		for(int k=0;k<n;k++)
		{
			cin>>t;
			m[t]++;
			if(m[t]>mayor)
			  mayor=m[t];
	    }
	    
	    for(it=m.begin();it!=m.end();it++)
	    {
			if((*it).second==mayor)
			{
				v.push_back((*it).first);
			}
		}
		if((int)v.size()==n)
		   cout<<"-1"<<endl;
		else
		  for(int k=0;k<(int)v.size();k++)
		  {
			  cout<<v[k]<<endl;
		  }
	    m.clear();
	    v.clear();
	}
	
	return 0;
}

