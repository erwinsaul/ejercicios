/* problem: PROSJEK
 * code: 3025
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t[101], n[101], p;
	cin>>p;
	t[0]=0;
	for(int k=1;k<=p;k++)
	{
		cin>>t[k];
	}
	for(int k=1;k<=p;k++)
	{
		n[k]=k*t[k]-(k-1)*t[(k-1)];
	}
	for(int k=1;k<=p;k++)
	{
		cout<<n[k]<<" ";
	}
	return 0;
}

