/*   Problem:  Parity Words 
 *   Code: 2183
 *   Site: coj.uci.cu
 *   Status: Accepted(2)
 *   type: string
 */


#include <iostream>
#include <sstream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int asc(char c)
{
	return (int)c;
}

int main(int argc, char **argv)
{
	int n,e,o;
	string s;
	getline(cin,s);
	istringstream ss(s);
	ss>>n;
	while(n--)
	{
		e=0;
		o=0;
	    getline(cin,s);
	    for(int k=0;k<(int)s.length();k++)
	    {
			if(asc(s.at(k))%2==0)
			   e++;
			else
			   o++;
		}
		if(e>o)
		   puts("Even");
		else
           puts("Odd");
	}
	return 0;
}

