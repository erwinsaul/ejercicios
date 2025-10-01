/* Problem: Prime number or not
 * Code: 1649
 * Site: acm.fzu.edu.cn
 * Status: Time Limit Exced
 * Type: Math
 */        
     


#include <iostream>
#include <stdint.h>
#include <cmath>
using namespace std;
bool is_prime(uint64_t n)
 {
	 if(n<0) return is_prime(-n);
	 if(n < 5 || n%2==0 || n%3==0) return (n==2 || n==3);
	 uint64_t maxP= sqrt(n)+2;
	 for(uint64_t p=5;p<maxP;p+=6)
	     if(n%p==0 || n%(p+2)==0) return false;
	 return true;
 }
int main(int argc, char **argv)
{
	uint64_t n;
	while(cin>>n)
	{
		if(is_prime(n))
		  cout<<"It is a prime number."<<endl;
	    else
	      cout<<"It is not a prime number."<<endl;
	}
	return 0;
}

