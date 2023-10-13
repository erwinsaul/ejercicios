/* problem: 3129 - Mysterious Number
 * code: 3129
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t;
	int n, p;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s>>p;
		if(s.compare("even")==0)
		{
			cout<<p*2-1<<endl;
		}
		else
		{
			cout<<p*2<<endl;
		}
	}
	return 0;
}

