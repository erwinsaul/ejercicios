/*  Problem: Andy's First Dictionary
 *  Code: 1215
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted(1)
 *  Type: Data
 */


#include <iostream>
#include <sstream>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

string separar(string s)
{
	string r;
	for(int k=0;k<(int)s.length();k++)
	{
		if((s.at(k)<'a' || s.at(k)>'z') && (s.at(k)<'A' || s.at(k)>'Z'))
		   r.push_back(' ');
		else
		   r.push_back((char)tolower(s.at(k)));
	}
	return r;
}

int main(int argc, char **argv)
{
	string s;
	istringstream ss;
	map<string,int> m;
	map<string,int>::iterator it;
	while(getline(cin,s))
	{
		ss.str(separar(s));
		while(ss>>s)
		{
			m[s]++;
		}
		ss.clear();
	}
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<endl;
	}
	return 0;
}

