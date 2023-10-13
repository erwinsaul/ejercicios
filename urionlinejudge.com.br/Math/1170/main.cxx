/*  Problem: Blobs
 *  Code: 1170
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Math
 */

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main(int argc, char **argv)
{
	double k;
	int t,n;
	cin>>n;
	while(n--)
	{
		cin>>k;
		t=0;
		while(k>1.0)
		{
		   k=k/2.0;
		   t++;
		}
		printf("%d dias\n",t);
	}
	return 0;
}

