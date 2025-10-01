/*  Problem: Score Validation
 *  Code: 1117
 *  Site: www.urionlinejudge.com.br
 *  Status: pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	double s,n=0,t=0;
	while(1)
	{
		cin>>s;
		if(s<0.0||s>10.0)
		  puts("nota invalida");
		else
		{
			t++;
			n=s+n;
		}
		if(t==2)
		  break;
	}
	printf("media = %.2f\n",(n/2.0));
	return 0;
}

