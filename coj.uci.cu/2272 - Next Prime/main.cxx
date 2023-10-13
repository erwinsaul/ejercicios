/*  Problem:Next Prime
 *  Code: 2272
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Math
 */


#include <iostream>
#include <cmath>

using namespace std;


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

long  long int solve(long long int n)
{
	if(n<=2)
	  return 2;
	  
	while(1)
	{
		if(is_prime(n))
		   return n;
		n++;
	}
}

int main(int argc, char **argv)
{
	
	int t;
    long long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;	
		cout<<solve(n)<<endl;
	}
	
	return 0;
}

