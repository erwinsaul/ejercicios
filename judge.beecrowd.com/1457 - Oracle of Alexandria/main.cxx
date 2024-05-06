/* problem: Oracle of Alexandria
 * code: 1457
 * site: www.urionlinejudge.com.br
 * status: Pending
 */
#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

int main(int argc, char **argv)
{
	int t,k,l,j;
	uint64_t r;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>k>>s;
		r=1;
		l=s.length();
		j=0;
		while((k-j*l)>1)
		{
			r=r*(k-j*l);
			j++;
		}
		cout<<r<<endl;
	}
	return 0;
}

