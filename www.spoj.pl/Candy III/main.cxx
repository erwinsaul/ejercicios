/* Problem: Candy III
 * Code: CANDY3
 * Site: spoj.pl
 * Status: Accepted
 */        


#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char **argv)
{
	int t, n;
	unsigned long long s,r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		s=0;
		r=0;
		for(int k=0;k<n;k++)
		{
			scanf("%lld",&r);
			s=(s+r)%n;
		}
		r=s/n;
		if(s==0)
		   printf("YES\n");
		else
		   printf("NO\n");
	}
	return 0;
}

