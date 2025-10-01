/*  Problem: Ages
 *  Code: 1154
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n,sum=0,t=0;
	while(1)
	{
		cin>>n;
		if(n<0)
		  break;
		t++;
		sum=sum+n;
	}
	printf("%.2f\n",(double)sum/(double)t);
	return 0;
}

