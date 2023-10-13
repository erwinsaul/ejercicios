/*  Problem: Logical Sequence
 *  Code: 1144
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
	long d,c;
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		d=k*k;
		c=k*k*k;
		printf("%d %ld %ld\n",k,d,c);
		printf("%d %ld %ld\n",k,(d+1),(c+1));
	}
	return 0;
}

