/* problem:  Birthday Statistics
 * code: 2634
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[13];
	int n;
	int id,d,m,a;
	cin>>n;
	memset(v,0,sizeof (v));
	while(n--)
	{
		scanf("%d %d/%d/%d", &id, &d, &m, &a);
		v[m]++;
	}
	for(int k=1;k<=12;k++)
	{
		cout<<k<<" "<<v[k]<<endl;
	}
	return 0;
}

