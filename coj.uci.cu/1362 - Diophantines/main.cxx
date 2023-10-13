/*   Problem: 1362 - Diophantines
 *   Code: 1362
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Matematicas
 */



#include <iostream>
#include <cmath>

using namespace std;

long long gcd(long long x, long long y)
{
   return y ? gcd(y, x % y) : abs(x);
}


int main(int argc, char **argv)
{
	long long a, b, c,g;
	while(cin>>a>>b>>c && (a || b ||c ))
	{
		g=gcd(a,b);			
		if( c%g ==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

