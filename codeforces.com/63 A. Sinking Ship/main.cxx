/* problem: A. Sinking Ship
 * code: 63
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	map<int, vector<string> > m;
	int n, t;
	string s,p;
	cin>>n;
	while(n--)
	{
		cin>>s>>p;
		if(p=="rat")
		{
			m[1].push_back(s);
		}
	    else if(p=="woman" || p=="child")
	    {
			m[2].push_back(s);
		}
		else if(p=="man")
		{
			m[3].push_back(s);
		}
		else
		{
			m[4].push_back(s);
		}
	}
	for(int k=1; k<=4; k++)
	{
		t=m[k].size();
		for(int j=0;j<t;j++)
		{
			cout<<m[k][j]<<endl;
		}
	}
	return 0;
}

