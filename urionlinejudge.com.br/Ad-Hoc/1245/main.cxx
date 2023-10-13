/*  Problem: Lost Boots
 *  Code: 1245
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;
int main(int argc, char **argv)
{
	int n,t,p;
	char c;
	int d[61],i[61];
	while(cin>>n)
	{	
		
		p=0;
		memset(d,0,sizeof(d));
		memset(i,0,sizeof(i));
	    while(n--)
	    {
			cin>>t>>c;
			if(c=='D')
			   d[t]++;
			else
			   i[t]++;
		}		
		for(int k=30;k<61;k++)
		{
			if(d[k]==i[k])
			{
			  p+=d[k];			  
			}
			else
			{
				p+=min(d[k],i[k]);
			}
		}
		printf("%d\n",p);
	}
	return 0;
}

