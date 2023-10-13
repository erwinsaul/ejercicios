/*  Problem: Flowers Flourish from France
 *  Code: 1140
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
using namespace std;
char mayus(char c)
{
	if(isupper(c))
	   return tolower(c);
	return c;
}

int main(int argc, char **argv)
{
	string s;
	istringstream ss;
	char c,a;
	bool flag;
	while(1)
	{
		getline(cin,s);
		if(s.compare("*")==0)
		   break;
		ss.clear();
		ss.str(s);
		flag=true;
		ss>>s;
		a=mayus(s.at(0));		
		while(ss>>s)
		{
			c=mayus(s.at(0));
		    if(a==c)
		      flag=true;
		   else
		   {
		      flag=false;
		      break;
		   }  
		}
		if(flag)
		  putchar('Y');
		else
		  putchar('N');
		putchar(10);
	}
	return 0;
}

