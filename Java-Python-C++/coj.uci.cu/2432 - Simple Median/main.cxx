/*   Problem:Simple Median
 *   Code: 2432
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int n,ind;
	double d,med;
	vector<double> v;
	while(cin>>n && n)
	{
		for(int k=0;k<n;k++)
		{
		  cin>>d;
		  v.push_back(d);
		}
		sort(v.begin(),v.end());
		if(n%2==0)
		{
			ind=n/2;
			med=(v[ind-1]+v[ind])/2;
		}
		else
		{
			ind=(n+1)/2;			
			med=v[ind-1];
		}
		printf("%.1f\n",med);
		v.clear();
	} 
	return 0;
}

