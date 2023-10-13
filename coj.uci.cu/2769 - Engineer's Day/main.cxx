/* problem:Engineer's Day
 * code: 2769
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	string s="I am participating in the Engineer's day.";
	int n;
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		cout<<k<<": "<<s<<endl;
	}
	return 0;
}

