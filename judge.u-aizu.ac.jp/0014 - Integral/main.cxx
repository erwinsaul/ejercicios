/* Problem: Integral
 * Code: 0014
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Math
 */


#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	
	int d;
	while(cin>>d)
	{
		long s=0;
		long y,x;
		for(long k=d;k<=600-d;k+=d)
		{
			x=d;
			y=k*k;
			s=s+(x*y);
			
		}
		cout<<s<<endl;
	}
	return 0;
}

