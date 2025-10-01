/*   Problem: 15618. Serie Curiosa
 *   Code: 15618
 *   Site: bo.spoj.com
 *   Status: pending
 *   type: Math
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	long n,a,b,d,t,m;
	while(cin>>t)
	{
		cin>>n;
		cin>>a;
		cin>>b;
		for(int k=2;k<n;k++)
		{
		    cin>>m;
		}
		d=b-a;
		cout<<a+(t-1)*d<<endl;
	}
	return 0;
}

