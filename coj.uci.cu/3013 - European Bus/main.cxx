/* problem: European Bus
 * code: 3013
 * site: coj.uci.cu
 * status:Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t;
	unsigned long long n, r;
	cin>>t;
	while(t--)
	{
		cin>>n;
		r = pow(2,n)-1;
		cout<<r<<endl;
	}
	return 0;
}

