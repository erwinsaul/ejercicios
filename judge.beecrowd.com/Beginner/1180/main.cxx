/*  Problem: Lowest Number and Position
 *  Code: 1180
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	int v;
	cin>>n;
	int menor=9999999,p=0;
	for(int k=0;k<n;k++)
	{
		cin>>v;
		if(v<menor)
		{
		  menor=v;
		  p=k;
		}
	}
	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",p);
	return 0;
}

