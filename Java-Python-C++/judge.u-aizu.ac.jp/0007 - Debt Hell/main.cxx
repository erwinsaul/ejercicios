/* Problem: Debt Hell
 * Code: 0007
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc - Simulacion
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
	
	int n;
	cin>>n;
	unsigned long d=100000,aux;
	while(n--)
	{
		aux=ceil(0.05*d);
		if(aux%1000!=0)
		   aux=((aux/1000)+1)*1000;
		d=d+aux;
	}
	cout<<d<<endl;
	return 0;
}

