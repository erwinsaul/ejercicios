/*   Problem:  Quadratic Equations
 *   Code: 2148
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

bool solve(int a,int b,int c)
{
	
	if(((b*b)-(4*a*c))<0)
	   return false;
	return true;
}

int main(int argc, char **argv)
{
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(solve(a,b,c))
		   puts("SI");
		else
		   puts("NO");
	}
	return 0;
}

