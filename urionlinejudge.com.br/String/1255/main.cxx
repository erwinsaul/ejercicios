/*  Problem: Letter Frequency
 *  Code: 1255
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc - 2
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <map>
using namespace std;



int main(int argc, char **argv)
{
	map<char,int> m;
	map<char,int>::iterator it;
	int n,mayor;
	char c;
	string s;	
	getline(cin,s);
	istringstream ss(s);
	ss>>n;
	while(n--)
	{
		mayor=0;
		getline(cin,s);
		for(int k=0;k<(int)s.length();k++)
		{
			c=s.at(k);
			if((c>='a' && c<='z') ||(c>='A' && c<='Z'))
			{
		      c=tolower(c);
		  	  m[c]++;
			  if(m[c]>mayor)
			   mayor=m[c];
			}
		}
		for(it=m.begin();it!=m.end();it++)
		{
			if((*it).second==mayor)
			   cout<<(*it).first;
		}
		cout<<endl;
		m.clear();		
	}
	return 0;
}

