/*  Problem: TRI
 *  Code: 1185 - The Product of Digits
 *  Site: coj.uci.cu
 *  Status: Accepted(5)
 *  Type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	unsigned long n;
	string r="";
	scanf("%ld",&n);
	if(n==0)
	    printf("10");
	else if(n==1)
	    printf("1");
	else
	  {
	     for(int k=9;k>=2;k--)
	     {
			 while(n%k==0)
			 {
				 r=(char)(k+48)+r;
				 n=n/k;
			 }
	     }
      }
      
      if(n>1)
         printf("-1");
      else
         cout<<r;
	return 0;
}

