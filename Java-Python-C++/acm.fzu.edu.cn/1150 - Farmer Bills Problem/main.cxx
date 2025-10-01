/* Problem: Farmer Bill's Problem
 * Code: 1150
 * Site: acm.fzu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc / Simulacion
 */      


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	
	int n,k,t;
	while(cin>>n>>k)
	{
		t=n;
		while(n>=k)
		{
			t=t+n/k;
			n=n/k+n%k;
		}
		cout<<t<<endl;
	}
	return 0;
}

