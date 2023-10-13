/* Problem: GCD and LCM
 * Code: 0005
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc 
 */

#include <iostream>
#include <cmath>
#include <stdint.h> 

using namespace std;

uint64_t gcd(uint64_t x, uint64_t y)
{
	return y ? gcd(y,x%y):fabs(x);
}



int main(int argc, char **argv)
{
	uint64_t a,b;
    uint64_t lcm;
	uint64_t g;
	while(cin>>a>>b)
	{
		g=gcd(a,b);
     	lcm=a*b/g;
		cout<<g<<" "<<lcm<<endl;
	}	
	return 0;
}

