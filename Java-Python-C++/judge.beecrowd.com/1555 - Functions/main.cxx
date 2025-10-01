/* problem: Functions
 * code: 1555
 * site: www.urionlinejudge.com.br
 * status:Accepted	
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int x,y,t;
	long long a,b,c;
	cin>>t;
	while(t--)
	{
	  cin>>x>>y;
	  a=((3*x)*(3*x))+(y*y);
	  b=(2*(x*x))+((5*y)*(5*y));
	  c=(-100*x)+(y*y*y);
	  if(a>b && a>c)
	    puts("Rafael ganhou");
	  else if(b>a && b>c)
	    puts("Beto ganhou");
	  else
	    puts("Carlos ganhou");
	}	
	return 0;
}

