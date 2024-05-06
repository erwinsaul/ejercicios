/*  Problem: Rot13 
 *  Code: 1249
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

bool is_letra(char c)
{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	   return true;
	return false;
}

int main(int argc, char **argv)
{
	string s;
	int p;
	while(getline(cin,s))
	{
		for(int k=0;k<(int)s.length();k++)
		{
			if(is_letra(s.at(k)))
			{
				if(islower(s.at(k)))
				 {
					p=(int)s.at(k)-97;
					p=(p+13)%26;
					p=p+97;
				 }
				if(isupper(s.at(k)))
				 {
					p=(int)s.at(k)-65;
					p=(p+13)%26;
					p=p+65;
				 }
				cout<<(char)p;
			}
			else
			  cout<<s.at(k);
		}		
		cout<<endl;
	}
	return 0;
}

