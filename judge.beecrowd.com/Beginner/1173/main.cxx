/*  Problem: Array fill I
 *  Code: 1173
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n,v[10];
	cin>>n;
	v[0]=n;
	for(int k=1;k<10;k++)
	{
		v[k]=2*v[k-1];
	}
	for(int k=0;k<10;k++)
	{
		printf("N[%d] = %d\n",k,v[k]);
	}
	return 0;
}

