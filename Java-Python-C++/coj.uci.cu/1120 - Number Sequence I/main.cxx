/*   Problem:Number Sequence I
 *   Code: 1120
 *   Site: coj.uci.cu
 *   Status: Pending
 *   type: Ad-Hoc
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	double m,n;
	long t;
	cin>>t;
	while(t--)
	{
	   cin>>n;
 	   m=(sqrt(8.0*n+1.0)-1.0) / 2.0;
 	   n=n - m*(m+1.0)/2.0+1.0;
 	   cout<<n<<endl;
    }
	return 0;
}

