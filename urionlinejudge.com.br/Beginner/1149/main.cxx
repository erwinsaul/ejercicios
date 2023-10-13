/*  Problem: Summing Consecutive Integers
 *  Code: 1149
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int a,n;
	long sum=0;
	cin>>a>>n;
	while(n<=0)
	   cin>>n;
	for(int k=0;k<n;k++)
	{
		sum=sum+a;
		a++;
	}
	printf("%ld\n",sum);
	return 0;
}

