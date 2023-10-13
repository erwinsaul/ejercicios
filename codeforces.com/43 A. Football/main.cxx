/*   Problem:A. Football
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: String/Map
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	map<string,int> m;
	string s;
	cin>>n;
	int max=-1;
	string r;
	while(n--)
	{
		cin>>s;
		m[s]++;
		if(m[s]>max)
		{
			max=m[s];
			r=s;
		}
		
	}
    cout<<r;
 	return 0;
}

