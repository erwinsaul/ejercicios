/*  Problem: Sequential IJ 1
 *  Code: 1095			
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int i,j;
	i=1;
	j=60;
	while(j>=0)
	{
		printf("I=%d J=%d\n",i,j);
		i+=3;
		j-=5;
	}
	return 0;
}

