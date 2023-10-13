/* Problem: Prime Generator
 * Code: 1136
 * Site: coj.uci.cu
 * Status: Accepted
 * Type: Math 
 * */

#include <iostream>
#include <math.h>

using namespace std;

int is_prime(long n)
{
	if(n<5||n%2==0||n%3==0)
	{
		return(n==2||n==3);
	}
	long maxP=sqrt(n)+2;
	for(long p=5;p<maxP;p+=6)
	{
		if(n%p==0||n%(p+2)==0) return 0;
	}
	return 1;
}


int main(int argc, char **argv)
{
	long n,a,b,k;
	cin>>n;
	while(n--)
	{
		a=0;
		b=0;
		cin>>a;
     	cin>>b;
		for(k=a;k<=b;k++)
		{
		   if(k>9)
			{
			if(k%10!=0&&k%10!=2&&k%10!=4&&k%10!=5&&k%10!=6&&k%10!=8&&k%2!=0)
			 if(is_prime(k))
			   cout<<k<<endl;
			}
			else
			{
			 if(is_prime(k))
			   cout<<k<<endl;
			}
		  
		}
		cout<<endl;
	}
	return 0;
}

