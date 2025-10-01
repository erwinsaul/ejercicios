/* problem: A+B=C
 * code: 2698
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n=0;
	char c;
	while(cin>>c)
	{
		n=n+(c-'A')+1;
	}
	cout<<n;
	return 0;
}

