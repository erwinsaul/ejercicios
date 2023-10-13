/*  Problem:Max Factor
 *  Code: 1390
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Math
 */


#include <iostream>
#include <algorithm>

using namespace std;

int factor(int n)
{
	int r=1;
	int j=2;
	while(n>1)
	{
		if((n%j)==0)
		{
		  while(n%j==0)
		     n=n/j;
		  r=max(r,j);
	    }
	    j++;
	}
	return r;
}

int main(int argc, char **argv)
{
	int n,t,temp;
	cin>>n;
	int r=1;
	int mayor=0;
	while(n--)
	{
		cin>>t;
		temp=factor(t);
		if(temp>mayor)
		{
		  r=t;
		  mayor=temp;
	    }
	}
	cout<<r<<endl;
	return 0;
}

