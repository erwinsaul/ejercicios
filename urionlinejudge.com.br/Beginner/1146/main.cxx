/*  Problem: Growing Sequences
 *  Code: 1146
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	while(1)
	{
		cin>>n;
		if(n==0)
		  break;
		for(int k=1;k<=n;k++)
		{
			printf("%d",k);
			if(k<n)
			  printf(" ");
		}
		putchar(10);
	}
	return 0;
}

