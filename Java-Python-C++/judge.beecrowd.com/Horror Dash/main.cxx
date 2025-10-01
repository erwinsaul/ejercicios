/* Problem: Horror Dash
 * Code: 11799
 * Site: uva.onlinejudge.org
 * Type: Ad-Hoc / Busqueda
 * Status: Accepted
 */          
     


#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int t, k,n,mayor,d;
	cin>>t;
	k=1;
	while(t--)
	{
		mayor=0;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>d;
			if(d>mayor)
			   mayor=d;
			
		}
		cout<<"Case "<<k<<": "<<mayor<<endl;
		k++;
	}
	return 0;
}

