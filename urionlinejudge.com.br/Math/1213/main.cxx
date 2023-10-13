/*  Problem: Ones
 *  Code: 1213
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math
 */


#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	unsigned long n,d,mod,s;
	while(cin>>n)
	{
		d=0;
		mod=0;
		s=1;
		while(s!=0)
		{
			mod=(mod*10+1)%n;
			s=mod;
			d++;
		}
		cout<<d<<endl;
	}
	return 0;
}

