/*  Problem: Primary Arithmetic 
 *  Code: 1212
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */

#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
	unsigned long a,b;
	int n,m,c,t,s;
	while(1)
	{
		cin>>a>>b;
		if(a==0&&b==0)
		  break;
		c=0;
		t=0;
		while(a!=0 || b!=0)
		{
			n=a%10;
			m=b%10;
			s=c+n+m;
			if(s>9)
			{			   
			   t++;			
			}
			c=s/10;
			a=a/10;
			b=b/10;			
		}
		if(t==0)
		  cout<<"No carry operation."<<endl;
		else if(t==1)
			cout<<t<<" carry operation."<<endl;
	    else
	    	cout<<t<<" carry operations."<<endl;
	}
	return 0;
}

