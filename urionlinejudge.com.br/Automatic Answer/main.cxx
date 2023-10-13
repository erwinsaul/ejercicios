/* Problem: Automatic Answer  
 * Code: 11547
 * Site: uva.onlinejudge.org
 * Type: Ad-Hoc
 * Status: Accepted
 */     


#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	long m;
	cin>>n;
	while(n--)
	{
		cin>>m;
		m=m*567;
		m=m/9;
		m=m+7492;
		m=m*235;
		m=m/47;
		m=m-498;
		m=m%100;
		m=m/10;
		cout<<fabs(m)<<endl;
	}
	return 0;
}

