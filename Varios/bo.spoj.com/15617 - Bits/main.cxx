/*   Problem:  15617 - Bits
 *   Code: 15617
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Ad-hoc
 */


#include <iostream>

using namespace std;


int bits(int n)
{
	int t=0;
	while(n>0)
	{
		t++;
		n=n/2;
	}
	return t;
}

int main(int argc, char **argv)
{
	int n;
	while(cin>>n)
	{
		cout<<bits(n)<<endl;
	}
	return 0;
}

