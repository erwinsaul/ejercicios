/* problem: A. Mysterious numbers - 1
 * code: 171
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int reverse(int b)
{
	int r=0;
	while(b>0)
	{
		r=r*10+b%10;
		b=b/10;
	}
	return r;
}

int main(int argc, char **argv)
{
	int a,b;
	cin>>a>>b;
	b=reverse(b);
	cout<<(a+b);
	return 0;
}

