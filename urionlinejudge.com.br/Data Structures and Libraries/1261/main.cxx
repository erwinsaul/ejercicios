/*  Problem: Hay Points
 *  Code: 1261
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Data Structures and Libraries
 */


#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	map<string,int> m;
	map<string,int>::iterator it;
	string s;
	int p,total;
	int n,t,k;
	cin>>n>>t;	
	while(n--)
	{
		cin>>s>>p;
		m[s]=p;
	}
	k=0;
	total=0;
	while(k<t)
	{
		cin>>s;
		if(s.compare(".")==0)
		{
		   cout<<total<<endl;		  
		   total=0;		    
		   k++;
		}
		else
		{
			it=m.find(s);
			if(it!=m.end())
			{
				total=total+m[s];
			}
		}		
	}
	return 0;
}

