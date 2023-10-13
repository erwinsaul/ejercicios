/*  Problem: Logical Sequence 2
 *  Code: 1145
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int x, y;
	cin>>x>>y;
	int k=1;
	while(k<=y)
	{
		for(int j=0;j<x;j++)
		{
			printf("%d",k);
			if(j+1<x)
			  printf(" ");
			k++;
		}
		putchar(10);
	}
	return 0;
}

