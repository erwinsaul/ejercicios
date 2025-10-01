/* Problem: Problem A: Greatest Common Divisor
 * Code: 1009
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: math
 */      


#include <iostream>
#include <cmath>
using namespace std;

 int gcd(int x, int y)
 {
	 return y?gcd(y, x%y):abs(x);
 }

int main(int argc, char **argv)
{
	int n,m;
	while(cin>>n>>m)
	{
		cout<<gcd(n,m)<<endl;
	}
	return 0;
}

