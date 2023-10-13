/* problem: A. Black Square
 * code: 471
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[5], t, d;
	cin>>v[1];
	cin>>v[2];
	cin>>v[3];
	cin>>v[4];
	string s;
	cin>>s;
	t=0;
	for(int k=0;k<(int)s.length();k++)
	{
		d = s.at(k)-48;		
		t = t + v[d];
	}
	cout<<t;
	return 0;
}

