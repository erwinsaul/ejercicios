/*  Problem: Prime Number
 *  Code: 1165
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
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
	int n,t;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(is_prime(t))
		   printf("%d eh primo\n",t);
		else
		   printf("%d nao eh primo\n",t);
	}
	
	return 0;
}

