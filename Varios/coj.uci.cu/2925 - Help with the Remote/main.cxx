/* problem: Help with the Remote
 * code: 2925
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	int t,a,b, r;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		r=0;
		while(a!=b)
		{
			r++;
			//cout<<a<<endl;
			if(a>b)
			{
				a=a/2;
			}
			else if(a<b)
			{
				a++;
			}			
			
	    }
		cout<<r<<endl;
	}
	return 0;
}

