	/* Problem: Hailstone Sequences
 * Site:coj.uci.cu
 * Code:HAILSTONE
 * Status: Accepted
 * Language: Ansi C.
 * By: Erwin Saúl   
 */


#include <stdio.h>

long cycle(long n)
{
	long mayor=0;
	while(n!=1)
	{
		if(n>mayor)
		    mayor=n;
	
		if(n%2==0)
		    n=n/2;
		else
		   n=(3*n)+1;

	
	}	
	    
	return (mayor);
}

int main(int argc, char** argv)
{
	long a;
	while(1)
	{
		scanf("%ld",&a);
		if(a==0)
		   break;
		if(a==1)
		     printf("1\n");
		else
		printf("%ld\n", cycle(a));
	
	}
	
	return 0;
}
