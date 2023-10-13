/*  Problem: Diamonds and Sand
 *  Code: 1069
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Data Structures and Libraries
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main(int argc, char **argv)
{
	stack <char> s;
	string c;	
	int n,r;
	cin>>n;
	while(n--)
	{
		cin>>c;
		r=0;
		for(int k=0;k<(int)c.length();k++)
		{
			if(c.at(k)=='<')
			{
				s.push(c.at(k));
			}
			if(c.at(k)=='>')
			{
				if(!s.empty())
				{
				  s.pop();
				  r++;
			    }
			}
		}
		cout<<r<<endl;
		while(!s.empty())
		 { 
          s.pop();
		}
	}
	return 0;
}

