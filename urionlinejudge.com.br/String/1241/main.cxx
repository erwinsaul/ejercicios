/*  Problem: Fit or Dont Fit II
 *  Code: 1241
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
using namespace std;
int main(int argc, char **argv)
{
	int n,ta,tb;
	string a,b;
	bool flag;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		flag=true;
		ta=a.length()-1;
		tb=b.length()-1;
		
		if(tb>ta)
		  flag=false;
		else
		{
		while(ta>=0 && tb>=0)
		{
			
			if(a.at(ta)!=b.at(tb))
			{
				flag=false;				
				break;
			}
			else
			{
				ta--;
				tb--;				
				flag=true;
			}
		}
	    }
		if(flag)
		   puts("encaixa");
		else
		   puts("nao encaixa");
	}
	return 0;
}

