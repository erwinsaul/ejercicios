/*  Problem: 386 - Perfect Cubes
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[200];
	unsigned long long r,a,b,c;
	int m,n,o;
	for(long long k=3;k<=200;k++)
	{
		memset(v,0,sizeof(v));
		r=k*k*k;		
		for(long long i=2;i<k;i++)
		{
			a=i*i*i;
			m=(int)i;
			for(long long j=2;j<k;j++)
			{
				b=j*j*j;
				n=(int)j;
				for(long long h=2;h<k;h++)
				{
					c=h*h*h;
					o=(int)h;					
					if((r==(a+b+c)) && (!v[m] || !v[n] || !v[o]))
					{
					  printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",k,i,j,h);
					  v[(int)i]=1;
					  v[(int)j]=1;
					  v[(int)h]=1;
					}
				}				
				
			}			
		}		
	}
	return 0;
}

