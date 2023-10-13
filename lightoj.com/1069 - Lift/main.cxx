/* Problem: Lift 
 * Code: 1069
 * Site: lightoj.com
 * Type: Ad-Hoc / Math
 * Status: Accepted
 */

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int t,a,b, r;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>a>>b;
		r=fabs(b-a)*4+a*4+10+9;
		cout<<"Case "<<k<<": "<<r<<endl;
	}
	return 0;
}

