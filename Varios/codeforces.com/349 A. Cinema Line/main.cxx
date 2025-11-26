/*   Problem: A. Cinema Line
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	int a=0,b=0,c=0,n,p;
	cin>>n;
	bool flag=true;
	for(int k=0;k<n;k++)
	{
		cin>>p;
		if(p==25)
		  a++;
	    else if(p==50)
	    {
			b++;
			a--;			
		}
		else
		{
			if(a>=3 && b==0)
			{
				c++;
				a=a-3;
			}
			else
			{
				a--;
				b--;
				c++;
			}
		}
		if(a<0 || b<0)
		   flag = false;
	}	
	if(flag)
	   cout<<"YES";
	else
	   cout<<"NO";
	return 0;
}

