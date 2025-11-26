/*   Problem: A. Boy or Girl
 *   Site: codeforces
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	map<char,int> m;
	string s;
	cin>>s;
	for(int k=0;k<(int)s.length();k++)
	{
		m[s.at(k)]++;
	}
	if(m.size()%2==0)
	  cout<<"CHAT WITH HER!";
	else
	  cout<<"IGNORE HIM!";
	return 0;
}

