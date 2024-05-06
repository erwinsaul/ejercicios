/*  Problem: 412 - Pi
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Math - GCD
 */
#include <bits/stdc++.h>
#include <stdint.h>

using namespace std;
int gcd(int x, int y)
{
   return y ? gcd(y, x % y) : abs(x);
}


int main(int argc, char **argv)
{
    int n;
    int v[51];
    int r,t;
    while(cin>>n && n)
    {
		r=0;
		t=0;
		for(int k=0;k<n;k++)
		{
			cin>>v[k];
		}
		for(int k=0;k<n;k++)
		{
			for(int j=k+1;j<n;j++)
			{
				if(gcd(v[k],v[j])==1)
				  r++;
				t++;
			}
		}
		if(r==0)
		  cout<<"No estimate for this data set."<<endl;
	    else
	    {
			double res=sqrt((6.0/(double)r)*(double)t);
			printf("%.6f\n",res);
		}
		
	}	
	return 0;
}

