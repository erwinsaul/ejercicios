/*  Problem: Array Replacement I
 *  Code: 1172
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
	int v[10];
	for(int k=0;k<10;k++)
	{
		cin>>n;
		if(n<=0)
		  v[k]=1;
		else
		  v[k]=n;
	}
	
	for(int k=0;k<10;k++)
	{
		printf("X[%d] = %d\n",k,v[k]);
	}
	return 0;
}

