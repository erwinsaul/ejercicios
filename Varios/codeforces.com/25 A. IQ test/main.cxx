/*   Problem: A. IQ test
 *   Site: codeforces.com
 *   Status: Pending
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	int n,par=0,impar=0,d;	
	int p,i;
	cin>>n;		
	
	for(int k=1;k<=n;k++)
	{
		cin>>d;
		if(d%2==0)
		{
		   par++;
		   p=k;
	    }
	    else
	    {
			impar++;
			i=k;
		}
	}
	
	if(par==1)  
	   cout<<p;
    if(impar ==1)
      cout<<i;
	return 0;
}

