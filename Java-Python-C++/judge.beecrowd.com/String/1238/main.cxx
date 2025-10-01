/*  Problem: Combiner 
 *  Code: 1238
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
	int n,ta,tb,k;
	string a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		ta=a.length();
		tb=b.length();
		k=0;
		while(k<ta && k<tb)
		{
			cout<<a.at(k)<<b.at(k);
			k++;
		}
		if(ta<tb)
		{
			for(;k<tb;k++)
			   cout<<b.at(k);
		}
		if(ta>tb)
		{
			for(;k<ta;k++)
			   cout<<a.at(k);
		}
		cout<<endl;
		
	}
	return 0;
}

