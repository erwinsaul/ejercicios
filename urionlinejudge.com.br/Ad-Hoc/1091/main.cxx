/*  Problem: Division of Nlogonia
 *  Code: 1091
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Ad-Hoc - 2
 */

#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;
int main(int argc, char **argv)
{
    int t,x,y,n,m;
    while(1)
    {
		cin>>t;
		if(t==0)
		  break;
		cin>>x>>y;
		for(int k=0;k<t;k++)
		{
			cin>>n>>m;
			if(n==x||m==y)
			   printf("divisa\n");
			else if(n>x&&m>y)
			   printf("NE\n");
			else if(n<x&&m<y)
			   printf("SO\n");   
		    else if(n>x&&m<y)
			   printf("SE\n");
			else if(n<x&&m>y)
			   printf("NO\n");   
		}
		
	}	
	return 0;
}

