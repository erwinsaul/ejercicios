/* problem: A. Free Cash
 * code: 237
 * site: codeforces.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	map<string, int> m;
	string a,b, s;
	int r,n;
	r=INT_MIN;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		s=a+":"+b;
		m[s]++;
		if(m[s]>r)
		  r=m[s];
	}
	cout<<r;
	return 0;
}

