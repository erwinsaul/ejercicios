/*  Problem: Encryption
 *  Code: 1024
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

bool letra(char c)
{
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))	
	  return true;
	return false;
}


string solve(string s)
{
	for(int k=0;k<(int)s.length();k++)
	{
		if(letra(s.at(k)))
		{
		   s.at(k)=char((int)s.at(k)+3);		   
		}
	}	
	s=string(s.rbegin(),s.rend());
	for(int k=((int)s.length())/2;k<(int)s.length();k++)
	{
		 s.at(k)=char((int)s.at(k)-1);		   
	}
	
	return s;
}

int main(int argc, char **argv)
{
	string s;
	int n;
	getline(cin,s);
	istringstream ss(s);
	ss>>n;
	while(n--)
	{
		getline(cin,s);
		s=solve(s);
		cout<<s<<endl;
	}
	
	return 0;
}

