/*  Problem: How Many Primes?
 *  Code: 2427
 *  Site: coj.uci.cu
 *  Status: pending
 *  Type: Math
 */

#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
int v[1000001];

bool is_prime(long long int n)
{
   if (n < 0) return is_prime(-n);
   if (n < 5 || n % 2 == 0 || n % 3 == 0) return (n == 2 || n == 3);
   int maxP = sqrt(n) + 2;
   for (int p = 5; p < maxP; p += 6)
      if (n % p == 0 || n % (p+2) == 0) 
        return false;
   return true;
}

void solve()
{
	for(int k=2;k<1000001;k++)
	   v[k]=is_prime(k);
}


int main(int argc, char **argv)
{
	int a,b,s;
	memset(v,-1,sizeof(v));
	v[0]=0;
	v[1]=0;
	solve();
	while(cin>>a>>b && a && b)
	{
		s=0;
	   for(int k=a;k<=b;k++)
	     s=s+v[k];
	   cout<<s<<endl;
	}
	return 0;
}

