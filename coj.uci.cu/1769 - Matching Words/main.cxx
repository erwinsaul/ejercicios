/*   Problem:  Matching Words	
 *   Code: 1769
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Map
 */


#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main(int argc, char **argv)
{
	map<char,int> a;
	map<char,int> b;
	map<char,int>::iterator it;
	bool f1=true;
	bool f2=true;	
	string s;
	cin>>s;
	for(int k=0;k<(int)s.length();k++)
	   a[s.at(k)]++;
	cin>>s;
	for(int k=0;k<(int)s.length();k++)
	   b[s.at(k)]++;
	for(it=a.begin();it!=a.end();it++)
	{
		if(b[(*it).first]>=(*it).second)
		   f1=true;
		else
		 {
			f1=false;
			break;
		 }
		 
	}
	
	for(it=b.begin();it!=b.end();it++)
	{
		if(a[(*it).first]>=(*it).second)
		   f2=true;
		else
		 {
			f2=false;
			break;
		 }
		 
	}
	if(f1 || f2)
	  puts("YES");
	else
	  puts("NO");
	return 0;
}

