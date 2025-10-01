/*  Problem: Sub-prime
 *  Code: 1105
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string.h>
using namespace std;
int main(int argc, char **argv)
{
    int m[21];	
    int b,n;
    int d,v,c,sw;
    while(1)
    {
		cin>>b>>n;
		memset(m,0,sizeof(m));
		if(b==0&&n==0)
		   break;
		for(int k=1;k<=b;k++)
		   cin>>m[k];
		for(int k=0;k<n;k++)
		{
			cin>>d>>c>>v;
			m[d]=m[d]-v;
			m[c]=m[c]+v;
		}  
		sw=1;
		for(int k=1;k<=b;k++) 
		{
			if(m[k]<0)
			 {
				 sw=0;
				 break;
			 }
		}
		if(sw)
		   printf("S\n");
		else
		   printf("N\n");
	}
	return 0;
}

