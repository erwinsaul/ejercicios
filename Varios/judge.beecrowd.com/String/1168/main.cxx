/*  Problem: LED
 *  Code: 1168
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
int led(char c)
{ 
	int n;
	switch(c)
	{
		case '1':n=2;break;
		case '2':n=5;break;
		case '3':n=5;break;
		case '4':n=4;break;
		case '5':n=5;break;
		case '6':n=6;break;
		case '7':n=3;break;
		case '8':n=7;break;
		case '9':n=6;break;
		case '0':n=6;break;		
	}
	return n;
}
int main(int argc, char **argv)
{
	int t,n;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		n=0;
		for(int k=0;k<(int)s.length();k++)
		{
			n=n+led(s.at(k));
		}
		printf("%d leds\n",n);
	}
	return 0;
}

