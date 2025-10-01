/*  Problem: Justifier 
 *  Code: 1273
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	string s[50];
	int mayor,b,t;
	bool flag=false;
	while(1)
	{
		
		cin>>t;		
		if(t==0)
		  break;
		if(flag)
		  cout<<endl;
	    flag=true;
		mayor=-1;
		for(int k=0;k<t;k++)
		{
		  cin>>s[k];
		  b=s[k].length();
		  if(b>mayor)
		     mayor=b;  
		}
		for(int k=0;k<t;k++)
		{
			b=s[k].length();
			for(int i=0;i<(mayor-b);i++)
			{
				cout<<" ";
			}
			cout<<s[k]<<endl;
		}
		
	}
	return 0;
}

