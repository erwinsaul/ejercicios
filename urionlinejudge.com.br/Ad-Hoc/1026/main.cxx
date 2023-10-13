/*  Problem: To Carry or not to Carry
 *  Code: 1026
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc - 2
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <cmath>
using namespace std;
int inttobin(unsigned int a, int *bin)
{
	int one=0;
	unsigned int c=1;
	int i;
	for(i=31;i>=0;i--)
	{
		one = one +(a&c);
		bin[i] =(a&c)?1:0;
		c<<=1;
	}
	return one;
	
}

unsigned long bintoint(int a[])
{
	int n=0;
	for(int k=0;k<32;k++)
	 {
		 n=n+a[k]*pow(2,(32-k-1));
	 }
	 return n;	
}
int main(int argc, char **argv)
{
	long long n,m;
	int a[32],b[32],c[32];
	while(cin>>n>>m)
	{
		n=inttobin(n,a);		
		m=inttobin(m,b);
		for(int k=0;k<32;k++)
		{
		  if(a[k]+b[k]>1)
		      c[k]=0;
		  else
		     c[k]=a[k]+b[k];
		}		
	 //  cout<<(n^m)<<endl; //tambien funciona esto.
		cout<<bintoint(c)<<endl;
	}
	return 0;
}

