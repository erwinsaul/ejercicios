/*   Problem:  Visible Lattice Points
 *   Code: 1047
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int gcd(int x, int y)
{
	return y? gcd(y,x % y) : abs(x);
}

int main(int argc, char **argv)
{
	int g[1001];
	g[1]=3;
	int t,s,n;
	for(int k=2;k<=1001;k++)
	{
		s=0;
		for(int j=1;j<=k;j++)
		{
			if(gcd(k,j)==1)
			   s++;
		}		
		g[k]=g[k-1]+2*s;
	}	
	cin>>t;	
	for(int k=1;k<=t;k++)
	{
       cin>>n;
       printf("%d %d %d\n",k,n,g[n]);       
	}
	
	return 0;
}

