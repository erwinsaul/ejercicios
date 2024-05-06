tre/*  Problem: Tell me the Frequencies!
 *  Code: 1251
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Data Structures and Libraries - 2
 */

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string n;		
	bool flag=false;
	map<int,int> m;
	map<int,int>::iterator it;
	map<int,int>::iterator f;
	multimap<int,int> mm;
	multimap<int,int>::iterator mit; 
	vector<int> v;
	vector<int>::iterator vit;
	while(cin>>n)
	{
		if(flag)
		   cout<<endl;		   
		flag=true;
		
		for(int k=0;k<(int)n.length();k++)
		{
			m[(char)n.at(k)]++;
		}				
		for(it=m.begin();it!=m.end();it++)
		{		
			mm.insert(pair<int,int>((*it).second,(*it).first));			
		}		
		for(int k=1;k<=1000;k++)
		{
			for(mit=mm.equal_range(k).first; mit!=mm.equal_range(k).second; ++mit)
				{					
					v.push_back((*mit).second);					
				}
				sort(v.begin(),v.end(),greater<int>());
				for(vit=v.begin();vit!=v.end();vit++)
				{
					cout<<(*vit)<<" "<<k<<endl;
				}
			v.clear();
		}		
		mm.clear();
		m.clear();		
	}
	return 0;
}

