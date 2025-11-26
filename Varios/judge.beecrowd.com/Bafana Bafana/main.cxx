/* Problem: Bafana Bafana
 * Code: 11805
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math 
 * Status: Accepted
*/

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int t;
	cin>>t;
	int n,k,p;
	for(int i=1;i<=t;i++)
	{
	   cin>>n>>p>>k;
	   cout<<"Case "<<i<<": "<<(((k-1+p)%n)+1)<<endl;
	}
	return 0;
}

