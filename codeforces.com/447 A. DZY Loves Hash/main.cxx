/* problem: A. DZY Loves Hash
 * code: 447
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	long p, n, x, r=0, h;
	map<long, int> m;
	cin>>p>>n;
	for(int k=1;k<=n;k++)
	{
		cin>>x;		
		h=x % p;		
		if(m[h]==1)
		{
			r=k;
			break;
		}
		else
		  m[h]=1;
	}
	if(r==0)
	  cout<<"-1";
	else
	  cout<<r<<endl;
	
	
	return 0;
}

