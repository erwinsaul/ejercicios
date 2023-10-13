/*   Problem: Betty and the Modular Exponentiation
 *   Code: 2422
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */

#include <iostream>
#include <cstdio>
#include <map>
#include <climits>

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
	int t;
	cin>>t;
	unsigned long long a,b;
	while(t--)
	{
		cin>>a>>b;
		cout<<modexp(a,b,1000000000)<<endl;
	}
	return 0;
}

