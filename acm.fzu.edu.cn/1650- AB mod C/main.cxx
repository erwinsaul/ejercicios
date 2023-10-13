/* Problem: AB mod C 
 * Code: 1650 - 
 * Site: acm.fzu.edu.cn
 * Status: Accepted
 * Type: Math
 */       


#include <iostream>
#include <stdint.h>
using namespace std;
unsigned long long mul(unsigned long long a,unsigned long long b,unsigned long long c)
{
unsigned long long int a1=a,b1=b,c1=c;

if(!a1)
   return 0;
    return (((a1&1)*b1)%c1+(mul(a1>>1,b1,c1)<<1)%c1)%c1;
}

unsigned long long modexp(unsigned long long a,unsigned long long b,unsigned long long c)
{
   unsigned long long y=1;
   while(b)
   {
      if(b%2==1)
        y=mul(y,a,c);
      a=mul(a,a,c);
      b=b>>1;
   }
   return y;
}
int main(int argc, char **argv)
{
	uint64_t a, b, n;
	while(cin>>a>>b>>n)
	{
		cout<<modexp(a,b,n)<<endl;
	}
	return 0;
}

