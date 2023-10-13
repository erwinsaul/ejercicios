/*  Problem: Fit or Dont Fit I
 *  Code: 1240
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math
 */

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main(int argc, char **argv)
{
	unsigned long n,m;
	int t,sw;
	int dn,dm;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		sw=1;
		if(m>n)
		  sw=0;
		if(m==n)
		  sw=1;
		else
		{
		 while(m>0)
		 {
			dn=n%10;
		    dm=m%10;
		    if(dn==dm && sw)
		       sw=1;
		    else
		       sw=0;
		    n=n/10;
			m=m/10;
		 }
		} 
		if(sw)
		  printf("encaixa\n");
		else
		  printf("nao encaixa\n");
	}
	return 0;
}

