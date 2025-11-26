/*  Problem: Fake Tickets
 *  Code: 1318
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc - 1
 */


#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main(int argc, char **argv)
{
	int n,m,t,p;
	int v[10001];
	while(1)
	{
		cin>>n>>m;
		t=0;
		memset(v,0,sizeof(v));
		if(n==0&&m==0)
		  break;
		for(int k=0;k<m;k++)
		{
			cin>>p;
			v[p]++;
		}
		for(int k=0;k<=n;k++)
		{		
		    if(v[k]>1)
		     t++;
		}
		
		printf("%d\n",t);
	}
	return 0;
}

