/*   Problem: 4481 - Jingle Composing
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	map<char,double> m;
	int res;
	double r;
	m['W']=1.0;
	m['H']=1.0/2.0;
	m['Q']=1.0/4.0;
	m['E']=1.0/8.0;
	m['S']=1.0/16.0;
	m['T']=1.0/32.0;
	m['X']=1.0/64.0;
	string s;
	while(cin>>s && s.compare("*")!=0)
	{
		r=0.0;
		res=0;
		for(int k=0;k<(int)s.length();k++)
		{
			if(s.at(k)=='/')
			{
				if(r==1.0)
				{
					res++;
				}
				r=0.0;
			}
			else
			{
				r=r+m[s.at(k)];
			}
		}
		cout<<res<<endl;
	}
	
	return 0;
}

