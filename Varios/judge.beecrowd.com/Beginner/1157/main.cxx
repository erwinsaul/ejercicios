/*  Problem: Divisors I
 *  Code: 1157
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
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		if(n%k==0)
		  printf("%d\n",k);
	}
	return 0;
}

