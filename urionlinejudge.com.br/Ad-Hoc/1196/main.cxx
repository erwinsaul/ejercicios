/*  Problem: WERTYU
 *  Code: 1196
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: AdHoc
 */

#include <algorithm>
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

char buscar(char c)
{
	int t;
	string s[4]={"`1234567890-=",
				 "QWERTYUIOP[]\\",
				 "ASDFGHJKL;'",
				 "ZXCVBNM,./"
	             };
	for(int k=0;k<4;k++)
	{
		t=s[k].find(c);
		if(t>0)
		{
			return s[k].at(t-1);
		}
	}
	return c;  
	
}


int main(int argc, char **argv)
{
	string s;
	while(getline(cin,s))
	{
		for(int k=0;k<(int)s.length();k++)
		{
			if(s.at(k)==' ')
			{
				cout<<s.at(k);
			}
			else
			{
				cout<<buscar(s.at(k));
			}
		}
		cout<<endl;
	}
	return 0;
}

