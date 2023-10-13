/*  Problem: Mean Median Problem
 *  Code: 1379
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int media(int a,int b,int c)
{
	int menor=a;
	int mayor=a;
	if(b<menor)
	    menor=b;
	if(c<menor)
	   menor=c;
	if(b>mayor)
	    mayor=b;
	if(c>mayor)
	   mayor=c;
	return (a+b+c-menor-mayor);
}

int main(int argc, char **argv)
{
	long long a,b,c,m;	
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		  break;
		m=0;
		c=0;
		while(1)
		{
		   c=3*m-a-b;		   		   
		   if(m==media(a,b,c))
		      break;		   
		   m=media(a,b,c);
		}
		cout<<c<<endl;
	}
	return 0;
}

