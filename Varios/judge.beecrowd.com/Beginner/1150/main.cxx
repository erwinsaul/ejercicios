/*  Problem:Exceeding Z
 *  Code: 1150
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int x,z;
	cin>>x>>z;
	int s=0;
	int j=0;
	while(z<x)
	{
		cin>>z;
	}
	while(s<=z)
	{
		s=s+x;
		j++;
		x++;
	}
	printf("%d\n",j);
	return 0;
}

