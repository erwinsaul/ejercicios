/* problem: Inverting the Parity
 * code: 2946
 * site: coj.uci.cu
 * status: TLE
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,t;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(t%2==1)
		{
			cout<<(t<<1)<<endl;
		}
		else
		{
			while(t%2==0)
			{
				t= (t>>1);
			}
			cout<<t<<endl;
		}		
	}
	return 0;
}

