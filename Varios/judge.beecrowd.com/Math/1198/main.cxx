/*  Problem: Hashmat the Brave Warrior 
 *  Code: 1198
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math
 */

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main(int argc, char **argv)
{
	long long n,m,may,men;
	while(cin>>n>>m)
	{
		if(n>m)
		 {
			 may=n;
			 men=m;
		 } 
	   else
	    {
			 may=m;
			 men=n;
		 } 
		printf("%lld\n",(may-men));
	}
	return 0;
}

