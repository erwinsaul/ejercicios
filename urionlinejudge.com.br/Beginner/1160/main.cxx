/*  Problem: Population Increase
 *  Code: 1160
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	long c, t;
	double n,m;
	long a,b;
	cin>>c;
	while(c--)
	{
		t=0;
		cin>>a>>b>>n>>m;
		while(a<=b)
		{
			a=a+(a*(n/100.0));
			b=b+(b*(m/100.0));			
			t++;
			if(t>100)
			  break;
		}
		
		if(t>100)
		  printf("Mais de 1 seculo.\n");
		else
		  printf("%ld anos.\n",t);
		
	}
	return 0;
}

