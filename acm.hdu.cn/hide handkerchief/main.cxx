/* Problem: hide handkerchief
 * Code: 6
 * Site: acm.hdu.edu.cn
 * Status: Pending
 * Type: Ad-Hoc - Math
 */

#include <iostream>
#include <cmath>
using namespace std;

int gcd(int x, int y)
{
	return y? gcd(y,x%y):abs(x);
}

int main(int argc, char **argv)
{
	int n,m;
	while(1)
	{
		cin>>n>>m;
		if(n==-1 && m==-1)
		   break;
		if(gcd(n,m)==1)
		   cout<<"YES"<<endl;
		else
		   cout<<"POOR Haha"<<endl;
	}
	return 0;
}

