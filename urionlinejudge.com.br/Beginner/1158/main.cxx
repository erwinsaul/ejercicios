/*  Problem: Sum of Consecutive Odd Numbers III
 *  Code: 1158
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int abs(int n)
{
	if(n<0)
	  return n*-1;
    return n;
}
int main(int argc, char **argv)
{
	int n,x,y,s;
	cin>>n;
	while(n--)
	{
		s=0;
		cin>>x>>y;
		int k=0;
		while(k<y)
		{
			if((abs(x)%2)==1)
			{
			   s=s+x;
			   k++;
			}
			x++;
		}
		printf("%d\n",s);
	}
	return 0;
}

