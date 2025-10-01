/*   Problem: A. Stones on the Table
 *   Site: codeforces.com
 *   Status: Pending
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	string s;
	cin>>n>>s;
	int total=0;
	for(int k=0;k<(n-1);k++)
	{
		if(s.at(k)==s.at(k+1))
		  total++;
	}
	cout<<total;
	return 0;
}

