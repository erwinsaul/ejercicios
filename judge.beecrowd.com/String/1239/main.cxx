/*  Problem: bloggo Shortcuts 
 *  Code: 1239
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	string s;
	
	char c;
	bool i=false;
	bool b=false;	
	while(getline(cin,s))
	{
		
		for(int k=0;k<(int)s.length();k++)
		{
			c=s.at(k);
			if(c=='_')
			{
				if(i)
				{
					cout<<"</i>";
					i=false;
				}
				else
				{
					cout<<"<i>";
					i=true;
				}				
			}
			else if(c=='*')
			{
				if(b)
				{
					cout<<"</b>";
					b=false;
				}
				else
				{
					cout<<"<b>";
					b=true;
				}				
			}
			else
			  cout<<c;
		}
		cout<<endl;	
	}
	return 0;
}

