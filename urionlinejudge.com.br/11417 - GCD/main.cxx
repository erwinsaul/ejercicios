/* Problem:GCD
 * Code: 11417
 * Site: uva.onlinejudge.org
 * Status: Pending
 * Type: Math
 */

#include <iostream>
#include <cmath>

using namespace std;
int gcd(int x, int y)
 {
	 return y?gcd(y, x%y):fabs(x);
 }
int main(int argc, char **argv)
{
	int n, g;
	while(1)
	{
		cin>>n;
		if(n==0)
		   break;
		g=0;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			    g+=gcd(i,j);   
		}
		cout<<g<<endl;
	}
	return 0;
}

