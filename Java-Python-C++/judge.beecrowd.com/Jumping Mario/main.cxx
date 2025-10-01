/* Problem: Jumping Mario
 * Code: 11764
 * Site: uva.onlinejudge.org
 * Type: Ad-Hoc / Simulacio
 * Status: Accepted
 */          


#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int n,t,mayor,menor, ant,sig,k;
	cin>>n;
	k=1;
	while(n--)
	{
		mayor=0;
		menor=0;
		cin>>t;
		cin>>sig;
		while(t-->1)
		{
			ant=sig;
			cin>>sig;
			if(ant<sig)
			  mayor++;
			else if(ant>sig)
			  menor++;
		}
		cout<<"Case "<<k<<": "<<mayor<<" "<<menor<<endl;
		k++;
	}
	return 0;
}

