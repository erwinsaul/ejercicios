/*   Problem: A. Presents
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,d;
	cin>>n;
	int v[n+1];	
	for(int k=1;k<=n;k++)
	{
		cin>>d;
	    v[d]=k;
    } 
    bool flag=false;
    for(int k=1;k<=n;k++)
    {
	 if(flag)
	   cout<<" ";
	 flag=true;
      cout<<v[k];
    }  
	return 0;
}

