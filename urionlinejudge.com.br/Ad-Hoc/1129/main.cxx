/*  Problem: Optical Reader
 *  Code: 1129
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    int	n,t,p,sw;
    while(1)
    {
		cin>>n;
		if(n==0)
		   break;
	    for(int k=0;k<n;k++)
	    {
		  sw=0;
		  for(int i=0;i<5;i++)
		  {
			  cin>>t;
			  if(t<=127)
			  {
				  p=i;
				  sw++;
			  }
		  }	
		  if(sw==1)
		  {			  
		     cout<<(char)(p+65)<<endl;
		  }
		  else
		     cout<<"*"<<endl;
		}
		
	}
	return 0;
}

