/* problem: A. Cifera
 * code: 114
 * site: codeforces.com
 * status: Pending
 */
#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

int main(int argc, char **argv)
{
    uint64_t l,k,a;
    int r;
    cin>>k>>l;
    r=-1;
    a=1;
    while(a<l)
    {
		a=a*k;
		r++;
		if(a==l)
		{
			cout<<"YES"<<endl;
			cout<<r<<endl;
			return 0;
		}
	}
	cout<<"NO";
    return 0;
}

