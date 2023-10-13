/* problem: Bear and Strings
 * code: 437-B
 * site: codeforces.com
 * status:Pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s, a="bear";
	int r=0, u;
	cin>>s;
	for(int k=0;k<(int)s.length();k++)
	{
		u=0;
		for(int j=k+3;j<(int)s.length();j++)
		{
		if(s[j]=='r' && s[j-1]=='a' && s[j-2]=='e' && s[j-3]=='b')
		   u=1;
		if(u)
		  r++;
	    }
	}
	cout<<r;
	return 0;
}

