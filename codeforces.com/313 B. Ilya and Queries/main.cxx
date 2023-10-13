/*   Problem:B. Ilya and Queries
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: String
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	int m,l,r;
	cin>>s;
	int v[s.length()+1];	
	for(int k=1;k<(int)s.length();k++)
	{
		v[k]=v[k-1]+(s.at(k)==s.at(k-1));
	}
	cin>>m;
	for(int k=0;k<m;k++)
	{
		cin>>l>>r;
		cout<<v[r-1]-v[l-1]<<endl;
	}

	return 0;
}

