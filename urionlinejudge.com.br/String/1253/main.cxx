/*  Problem: Caesar Cipher 
 *  Code: 1253
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
int pos(int t,char c)
{
	int p=(int)(c-64);	
	p=(p-t);
	if(p<=0)
	{
	   p=p+26;	
	}
	return (p+64);
}
int main(int argc, char **argv)
{
	int a,t,n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s>>a;
		t=s.length();
		for(int k=0;k<t;k++)
		{
		 	cout<<(char)pos(a,s.at(k));
		}		
		cout<<endl;
	}
	return 0;
}

