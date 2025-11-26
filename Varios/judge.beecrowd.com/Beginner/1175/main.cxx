/*  Problem: Array change I
 *  Code: 1175
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int v[20];
	for(int k=0;k<20;k++)
	{
		cin>>v[k];
	}
	for(int k=19;k>=0;k--)
	{
		printf("N[%d] = %d\n",-1*(k-19),v[k]);
	}
	return 0;
}

