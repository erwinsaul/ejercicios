/*  Problem:  1487 - Alarms
 *  Site: coj.uci.cu
 *  Status: Pending
 *  Type: Math
 */


#include <bits/stdc++.h>

using namespace std;

long long gcd(long long x, long long y)
{
   return y ? gcd(y, x % y) : abs(x);
}

long long lcm(long long x, long long y)
{
	return (x*y)/gcd(x,y);
}

int main(int argc, char **argv)
{
	long long m=1;
	long long n,t,r=0;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>t;
		m=lcm(m,t);
	}
	int k=1;
	if(m>1000000)
	  cout<<"SILENCE"<<endl;
	else
	{
	 r=m;	
	 while(r<=1000000)
	 {
	   cout<<r<<endl;
	   k++;	   	  	  
	   r=k*m;
     }
    }
	return 0;
}

