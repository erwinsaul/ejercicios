/*   Problem: Mathematician Ana
 *   Code: 2434
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

bool is_prime(int n)
{
   if (n < 0) return is_prime(-n);
   if (n < 5 || n % 2 == 0 || n % 3 == 0) return (n == 2 || n == 3);
   int maxP = sqrt(n) + 2;
   for (int p = 5; p < maxP; p += 6)
      if (n % p == 0 || n % (p+2) == 0) 
        return false;
   return true;
}

int main(int argc, char **argv)
{
	int n;	
	unsigned long long r;		
	while(cin>>n && n)
	{
		r=1;
		for(int k=2;k<=n;k++)
		{
			if(is_prime(k))
			  r=r*k;
		}
		cout<<r<<endl;
	}
	return 0;
}

