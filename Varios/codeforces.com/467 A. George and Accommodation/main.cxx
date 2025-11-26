/* problem: A. George and Accommodation
 * code: 467
 * site: codeforces.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, p ,q, r=0;
	cin>>n;
	while(n--)
	{
		cin>>p>>q;
		if((q-p)>=2)
		   r++;
	}
	cout<<r;
	return 0;
}

