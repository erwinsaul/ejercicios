/*  Problem: PUM
 *  Code: 1142
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
	cin>>n;	
	int d=1;
	for(int k=0;k<n;k++)
	{
		printf("%d %d %d PUM\n",d,d+1,d+2);
		d=d+4;
	}
	return 0;
}

