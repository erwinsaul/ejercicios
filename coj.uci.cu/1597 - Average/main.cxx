/*   Problem: Average
 *   Code: 1597
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    vector<long> v;
    long h,l,n,aux;
    double p,t;
    while(cin>>h>>l>>n && h && l && n)
    {
		p=0;
		for(int k=0;k<n;k++)
		{
			scanf("%ld",&aux);
			v.push_back(aux);
		}
		sort(v.begin(),v.end());
		for(int k=l;k<(n-h);k++)
		{			
			p=p+v[k];
		}		
		t=(double)n-(l+h);		
		printf("%.6f\n",(p/t));
		v.clear();
	}
			
	return 0;
}

