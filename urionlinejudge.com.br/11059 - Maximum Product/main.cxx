/*  Problem: 11059 - Maximum Product
 *  Site: coj.uci.cu
 *  Status: Acceptes
 *  Type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	int v[18];
	int t;
	long long aux,r;
	t=1;	
	while(cin>>n)
	{
		r=0;		
		for(int k=0;k<n;k++)
		{
			cin>>v[k];
		}
		for(int k=0;k<n;k++)
		{
			aux=v[k];
			r=max(aux,r);
			for(int i=k+1;i<n;i++)
			{				
				aux=aux*v[i];			
				r=max(aux,r);				
			}
		   
		}
		printf("Case #%d: The maximum product is %lld.\n\n",t,r);	    
	    t++;
	}
	return 0;
}

