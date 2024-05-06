/*  Problem: 900 - Brick Wall Patterns
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Math - Fibonacci
 */
#include <bits/stdc++.h>
#include <stdint.h>

using namespace std;
uint64_t f[51];
void fibonacci() 
//Max n es 46 – llena un vector con los terminos de fibonnaci
{   
   f[1]=1;
   f[2]=2;
   for(int k=3;k<=50;k++)
      f[k]=f[k-1]+f[k-2];    	  
}


int main(int argc, char **argv)
{
	int n;
	fibonacci();
	while(cin>>n && n)
	{
		cout<<f[n]<<endl;
	}
	return 0;
}

