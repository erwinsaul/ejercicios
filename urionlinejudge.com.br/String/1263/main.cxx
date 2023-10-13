/*  Problem: Alliteration 
 *  Code: 1263
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

string minusculas(string s)
{
	for(int k=0;k<(int)s.length();k++)
	{
		s.at(k)=tolower(s.at(k));
	}	
	return s;
}

int main(int argc, char **argv)
{
	string s;
	char ant;
	int c;
	int t;
	while(getline(cin,s))
	{
		
		t=0;c=0;
		s=minusculas(s);		
		istringstream ss(s);		
		ss>>s;
		ant=s.at(0);
		while(ss>>s)
		{
			if(ant==s.at(0))
			{
				t++;				
				ant=s.at(0);
			}
			else
			{
				ant=s.at(0);				
				if(t>=1)
				   c++;
				t=0;
			}
		}
		if(t>=1)
		    c++;
		cout<<c<<endl;
	}
	return 0;
}

