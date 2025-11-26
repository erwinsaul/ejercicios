/* problem: A. Anton and Letters
 * code: 443
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	map<char,int> m;
	getline(cin,s);	
	for(int k=0;k<(int)s.length();k++)
	{
		if(s.at(k)>='a' && s.at(k)<='z')
		{
			m[s.at(k)]++;
		}		
	}
	cout<<m.size();
	return 0;
}

