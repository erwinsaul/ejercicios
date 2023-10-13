/*  Problem: Fast Prime Number
 *  Code: 1221
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool is_prime(int n)
{
    if (n < 0) return is_prime(-n);
    if (n < 5 || n % 2 == 0 || n % 3 == 0) return (n == 2 || n == 3);
    int maxP = sqrt(n) + 2;
    for (int p = 5; p < maxP; p += 6)
        if (n % p == 0 || n % (p+2) == 0) return false;
   return true;
}
int main(int argc, char **argv)
{
	int n;
	int t;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(is_prime(t))
		  puts("Prime");
		else
		  puts("Not Prime");
	}
	return 0;
}

