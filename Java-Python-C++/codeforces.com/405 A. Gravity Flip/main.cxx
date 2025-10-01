/* problem: A. Gravity Flip
 * code: 405
 * site: codeforces.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,d;
	vector<int> v;
	cin>>n;
	while(n--)
	{
		cin>>d;
		v.push_back(d);
	}
	sort(v.begin(), v.end());
	for(int k=0;k<(int)v.size();k++)
	  cout<<v[k]<<" ";
	return 0;
}

