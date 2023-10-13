/*  Problem: Paula's Mathematic Game
 *  Code: 1192
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

int solve(string s)
{
	int n;
	int a=s.at(0)-48;
	int b=s.at(2)-48;
    if(a==b)
       n=a*b;	
    else
    {
	 if(isupper(s.at(1)))
	   n=b-a;
	 else
	     n=a+b;
	}
	return n;
	   
}
int main(int argc, char **argv)
{
	string s;
	int n;	
	cin>>n;
	while(n--)
	{
		cin>>s;
		cout<<solve(s)<<endl;
	}
	return 0;
}

