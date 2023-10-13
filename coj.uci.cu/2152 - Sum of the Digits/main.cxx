/*   Problem:  Sum of the Digits
 *   Code: 2152
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <sstream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main(int argc, char **argv)
{
	int n,r;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		r=0;
		if(s.at(0)=='-')
		  {
			for(int k=1;k<(int)s.length();k++)
			    r=r+(s.at(k)-'0');  
		  }
		else
		  {
			for(int k=0;k<(int)s.length();k++)
			    r=r+(s.at(k)-'0');  
		  }
		cout<<r<<endl;
	}
	return 0;
}

