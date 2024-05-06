/*  Problem: Sequential IJ 2
 *  Code: 1096					
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int i,j;
	for(i=1;i<=9;i+=2)
	{
		for(j=7;j>=5;j--)
		  printf("I=%d J=%d\n",i,j);
	}
	return 0;
}

