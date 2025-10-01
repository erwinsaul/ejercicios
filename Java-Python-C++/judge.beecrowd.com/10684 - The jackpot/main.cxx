/*  Problem: 10684 - The jackpot
 *  Site: coj.uci.cu
 *  Status: Pending
 *  Type: Max 1D sum
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	int sum,ans;
	while(cin>>n && n)
	{
		int v[n];
		sum=0;
		ans=0;
		for(int k=0;k<n;k++)
		{
			cin>>v[k];
			sum=sum+v[k];
			ans=max(ans,sum);
			sum=sum<0?0:sum;
		}
		if(ans)
		 printf("The maximum winning streak is %d.\n",ans);
		else
		 printf("Losing streak.\n");
	}
	return 0;
}

