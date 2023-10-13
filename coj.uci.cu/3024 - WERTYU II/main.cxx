/* problem:  WERTYU II
 * code: 3024
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;


int buscar(string s, char c)
{
	for(int k=0;k<(int)s.length();k++)
	{
		if(s.at(k)==c)
		  return k;
	}
	return -1;
}

int main(int argc, char **argv)
{
	string a="`1234567890-=";
	string b="QWERTYUIOP[]\\";
	string c="ASDFGHJKL;'";
	string d="ZXCVBNM,./";
	string s;
	char car;
	getline(cin,s);	
	int t;
	for(int k=0;k<(int)s.length();k++)
	{
		car=s.at(k);	
		if((t=buscar(a,car))>0)
		{			
			cout<<a[t-1];
		}
		else if((t=buscar(b,car))>0)
		{
			cout<<b[t-1];
		}
		else if((t=buscar(c,car))>0)
		{
			cout<<c[t-1];
		}
		else if((t=buscar(d,car))>0)
		{
			cout<<d[t-1];
		}
		else
		{
			cout<<car;
		}
	}
	return 0;
}

