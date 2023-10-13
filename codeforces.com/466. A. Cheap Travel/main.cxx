/* problem:A. Cheap Travel
 * code: 466
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	int n,m,a,b;
	int o1, o2;
	cin>>n>>m>>a>>b;
	if(n<m)
	{
		o1=b;		
	}
	else
	{
		o1 = (n/m)*b;
		if(n%m > 0 )
		{
		 if(a<b)
		  o1 = o1 + (n%m)*a;
		 else
		  o1 = o1 + b;
	    }
    }
	o2 = n*a;
	if(o1<o2)
	   cout<<o1;
	else
	   cout<<o2;
	return 0;
}

