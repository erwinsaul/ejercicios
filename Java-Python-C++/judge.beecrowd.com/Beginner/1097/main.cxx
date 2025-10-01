/*  Problem: Sequential IJ 3
 *  Code: 1097					
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */



#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int i,j,ant,sig;
	ant=7;
	sig=5;
	for(i=1;i<=9;i+=2)
	{
		for(j=ant;j>=sig;j--)
		  printf("I=%d J=%d\n",i,j);
		sig=ant;
		ant=j+5;
	}
	return 0;
}

