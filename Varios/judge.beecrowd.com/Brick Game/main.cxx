/* Problem: Brick Game
 * Code: 11875
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math / Estadistica
 * Status: Accepted
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int t,n;
	cin>>t;
	int mediana;
	for(int k=1;k<=t;k++)
	{
		mediana=0;
		cin>>n;
		int v[n+1];
		for(int i=0;i<n;i++)
		   cin>>v[i];
		//sort(v,v+n+1);
		mediana=v[n/2];
	    cout<<"Case "<<k<<": "<<mediana<<endl;;
	}
	return 0;
}

