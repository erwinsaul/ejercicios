/* problem: A. Double Cola
 * code: 82
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string v[]={"Sheldon"," Leonard","Penny","Rajesh","Howard"};
	int n;
	cin>>n;
	while(n>5)
	{
		n=n/2-2;
	}
	cout<<v[n-1];
	return 0;
}

