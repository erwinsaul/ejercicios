/*   Problem:  Great Prices
 *   Code: 2452
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Map / Math
 */


#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <sstream>
#include <string>
#include <stdint.h>

using namespace std;

int main(int argc, char **argv)
{
	
	map<uint64_t,double> m;
    map<uint64_t,double>::iterator it;
    uint64_t id;
    int t,n;
    double p,total;
    cin>>t;
    while(t--)
    {
		cin>>n;
		total=0;
		for(int k=0;k<n;k++)
		{
			cin>>id>>p;
			if(m.find(id)!=m.end())
			{
				if(p<m[id])
				{
				   m[id]=p;
			    }
			}
			else
			{
				m[id]=p;
			}
		}
		for(it=m.begin();it!=m.end();it++)
		{
			total+=(*it).second;
		}
		printf("%.2f\n",total);
		m.clear();
	}
    	
	return 0;
}

