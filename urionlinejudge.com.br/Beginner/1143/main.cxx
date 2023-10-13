/*  Problem: Squared and Cubic
 *  Code: 1143
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
	for(long k=1;k<=n;k++)
	   printf("%ld %ld %ld\n",k,(k*k),(k*k*k));
	return 0;
}

