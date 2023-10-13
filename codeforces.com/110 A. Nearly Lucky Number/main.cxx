/*   Problem: A. Nearly Lucky Number
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;


bool suerte(string s)
{
	for(int k=0;k<(int)s.length();k++)
	{
		if(s.at(k)!='4' && s.at(k)!='7')
		   return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	string s;
	cin>>s;
	if(suerte(s) && s.length()>1)
	   cout<<"YES"<<endl;
	else
	   cout<<"NO"<<endl; 
	return 0;
}

