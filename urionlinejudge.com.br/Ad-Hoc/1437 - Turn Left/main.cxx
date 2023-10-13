/*   Problem: 1437 - Turn Left!
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	char c,r;
	int n;
	while(cin>>n && n)
	{
		r='N';
		for(int k=0;k<n;k++)
		{
			cin>>c;
			if(c=='D')
			{
			   if(r=='N')
			   	  r='L';			   	
			   else if(r=='L')
			      r='S';
			   else if(r=='S')
			      r='O';
			   else
			      r='N';
			}
			else
			{
			   if(r=='N')
			   	  r='O';			   	
			   else if(r=='O')
			      r='S';
			   else if(r=='S')
			      r='L';
			   else
			      r='N';
			}			
		}
		cout<<r<<endl;
		
	}
	return 0;
}

