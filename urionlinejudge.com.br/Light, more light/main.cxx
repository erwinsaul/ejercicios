/* Problem:  Light, more light
 * Code: 10110
 * Site: uva.onlinejudge.org
 * Status: Accepted
 */      


#include <iostream>
#include <cmath>
#include <stdio.h>


using namespace std;
int main(int argc, char **argv)
{
    unsigned int n,r;
    while(1)
    {
		scanf("%d",&n);
		if(n==0)
		   break;
		r=(int)sqrt(n);   
		if(r*r==n)   
		   printf("yes\n");
		else
		   printf("no\n");
	}	
	return 0;
}

