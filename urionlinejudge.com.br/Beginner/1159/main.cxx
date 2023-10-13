/*  Problem: Sum of Consecutive Even Numbers
 *  Code: 1159
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int abs(int n)
{
	if(n<0)
	  return n*-1;
    return n;
}
int main(int argc, char **argv)
{
	int n,s;	
	while(1)
	{
		cin>>n;
		s=0;
		if(n==0)
		  break;
		int k=0;		
		while(k<5)
		{
			if((abs(n)%2)==0)
			{
			   s=s+n;			 
			   k++;
			}
			n++;
		}
		cout<<s<<endl;
	}
	return 0;
}

