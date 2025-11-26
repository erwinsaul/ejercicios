/*   Problem: A. Arrival of the General
 *   Site: codeforces.com
 *   Status: WA
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin>>n;
	int v[n];
	int mayor=0;
	int menor=101;
	int p, f;
	for(int k=0;k<n;k++)
	{
		cin>>v[k];
		if(v[k]>mayor)
		   mayor=v[k];
		if(v[k]<menor)   
		  menor=v[k];
	}
	p=-1;
	for(int k=0;k<n && p==-1;k++)
	{
		if(v[k]==mayor)
		  p=k;
	}
	f=n;
	for(int k=(n-1);k>=0 && f==n ;k--)
	{
		if(v[k]==menor)
		  f=k;
	}		
	
	if(f<p)
	  cout<<(p+(n-f-1)-1);
    else
      cout<<(p+(n-f-1));
	
	return 0;
}

