//    Problem:  Big Number II
//    Site: coj.uci.cu
//    Code: 1395

#include <math.h>
#include <stdio.h>



long solve(long n)
{
	long res=0;
	int i;
	for(i=0;i<=n;i++)
	{
		res=res+log10(n);
	}
	return res;
}


int main(int argc, char** argv)
{
	int t;
	long n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&n);
		printf("%ld\n", solve(n));
	}	
	return 0;
}
