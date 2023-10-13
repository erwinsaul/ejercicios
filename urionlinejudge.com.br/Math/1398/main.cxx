/*  Problem: Ocean Deep! Make it shallow!!
 *  Code: 1398
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted(2)
 *  Type: Math
 */


#include <iostream>
#include <sstream>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int solve(string s)
{
	int r=0;
	int t=s.length();
	for(int k=0;k<t;k++)
	{
		r=(r*2+s.at(k)-'0')%131071;		
	}
	return (r%131071);
}
int main(int argc, char **argv)
{
	char c;
	string s;
	while(cin>>c)
	{
		if(c=='#')
		{
			if(solve(s)==0)
			   cout<<"YES"<<endl;
			else
			   cout<<"NO"<<endl;
			s.clear();
		}
		else
		{
			s.push_back(c);
		}
		
	}
	return 0;
}

