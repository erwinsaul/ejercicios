/* problem:2784 - In Order of Size
 * code: 2784
 * site: coj.uci.cu
 * status: Accepted	
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin>>n;
	int v[n];
	for(int k=0;k<n;k++)
	{
		cin>>v[k];
	}
	sort(v, v+n);
	cout<<v[n-1]<<" ";
	for(int k=0;k<(n-1);k++)
	{
		cout<<v[k]<<" ";
	}	
	return 0;
}

