/* Problem: T-primes
 * Code: 230B
 * Site: codeforces.com
 * Status: Accepted
 * Type: Math
 */

#include <iostream>
#include <cmath>
#include <stdint.h> 

using namespace std;

bool is_integer(uint64_t n)
{
	double root=sqrt(n);
	uint64_t t=(uint64_t)floor(root);
	if(t*t==n)
	  return true;
	else
	  return false;
}

bool is_prime(long long int n)
{
	if(n<0) return is_prime(-n);
	if(n<5 || n%2==0 || n%3==0) return (n==2||n==3);
	long long int maxP=sqrt(n)+2;
	for(long long int p=5;p<maxP;p+=6)
	    if(n%p==0 || n%(p+2)==0) return false;
	return true;
}

int main(int argc, char **argv)
{
	int t;
	uint64_t n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(is_integer(n))
		{
			if(is_prime(floor(sqrt(n))))
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}		
	}
	return 0;
}

