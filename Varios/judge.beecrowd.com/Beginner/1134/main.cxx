/*  Problem: Type of Fuel
 *  Code: 1134
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n,a,g,d;
	a=0;
	g=0;
	d=0;
	while(1)
	{
		cin>>n;
		if(n>=0||n<=4)
		{
			if(n==1)
			  a++;
			if(n==2)
			  g++;
			if(n==3)
			  d++;
			if(n==4)
			  break;
		}		
	}
	puts("MUITO OBRIGADO");
	printf("Alcool: %d\n",a);
	printf("Gasolina: %d\n",g);
	printf("Diesel: %d\n",d);
	return 0;
}

