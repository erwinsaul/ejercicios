/*  Problem: Bingo!
 *  Code: 1136
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char **argv)
{
	int n,b;
	int v[100];
	int p[100];
	int t;
	while(cin>>n>>b && n && b)
	{
		memset(v,0,sizeof(v));
		t=1;
		for(int k=0;k<b;k++)
		{
			cin>>p[k];
			v[p[k]]=1;
		}
		for(int k=0;k<b;k++)
		{
		   for(int i=k+1;i<b;i++)
		   {
			   v[(int)fabs(p[k]-p[i])]=1;
		   }
		}
		for(int k=0;k<=n;k++)
		{
		   t=t*v[k];
		}
		if(t==1)
		  puts("Y");
		else
		  puts("N");		
		
	}
	return 0;
}

