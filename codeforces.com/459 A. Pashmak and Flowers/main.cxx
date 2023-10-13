/* problem: B. Pashmak and Flowers
 * code: 459
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

int main(int argc, char **argv)
{
	long long n, i=0, j=0, d,mayor,menor, r;
	cin>>n;
	mayor=INT_MIN;
	menor=INT_MAX;
	for(int k=0;k<n;k++)
	{
		cin>>d;
		if(d==mayor)
		{
			i++;			
		}
		else if(d>mayor)
			{
				mayor=d;
				i=1;
			}		
		if(d==menor)
		{
			j++;					
		}
		else if(d<menor)
		{
				menor=d;
				j=1;
     	}
	}			
	cout<<mayor-menor;
	if(i==n)
	{
		r=i*(i-1)/2;		
	}
	else
	{
		r=i*j;
	}
	cout<<" "<<r;
	return 0;
}

