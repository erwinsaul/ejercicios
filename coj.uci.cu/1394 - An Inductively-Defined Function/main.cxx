/*  Problem:  An Inductively-Defined Function
 *  Code: 1394
 *  Site: coj.uci.cu
 *  Status: WA
 *  Type: Math
 */


#include <iostream>
#include <map>
#include <cassert>
#include <cstdio>
#include <stdint.h> 

using namespace std;

int f(const int &n)
{
  if (n == 1) return 1;
  if (n % 2 == 0) return n/2;  

  static map<int, int> cache;
  if (cache.count(n) > 0){
    return cache[n];
  }
  return cache[n] = f((n-1)/2) + f((n-1)/2 + 1);  
}
	
	
int main(int argc, char **argv)
{
      int64_t n;
	  bool flag=true;
	  while(true)
	  {
		  scanf("%lld",&n);
		  if(n==-1)
		     break;
		  if(!flag)
		     cout<<endl;
		  flag=false;	
		  assert(n >= 0);	  
		  printf("f(%lld) = %lld\n",n,(n%2==0)?(n/2):((n+1)/2));		  
	  }
	return 0;
}

