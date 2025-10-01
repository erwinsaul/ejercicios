/*  Problem: Coast Guard
 *  Code: 1247
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Math - 2
 */
 
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int d,vf,vg;	
	double tg,tf,h;
	while(cin>>d>>vf>>vg)
	{
		h=sqrt(d*d+144.0);
		tg=
		tf=12.0/(double)vf;
		tg=h/(double)vg;
		if(tf>=tg)
		  putchar('S');
		else
		  putchar('N');
		putchar(10);  
		
	}
	return 0;
}

