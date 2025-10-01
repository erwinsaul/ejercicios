/* problem: A. Choosing Teams
 * code: 432
 * site: codeforces.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, k, d, t;	
	cin>>n>>k;
	t=0;
	for(int i=0;i<n;i++)
	{
		cin>>d;
		if((5-d) >= k)
		{
			t++;
		}
	}
	cout<<t/3;
	
	return 0;
}

