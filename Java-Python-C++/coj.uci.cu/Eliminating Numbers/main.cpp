/*    Problem: Eliminating Numbers
 *    Site: coj.uci.cu
 *    Code: 1086
 *    Status: Accepted
 */


#include <iostream>
#include <bitset>
#include <vector>
#define MAXPRIME 10000000  // debe ser igual a la raiz cuadrada del máximo número que vamos a manejar


using namespace std;
bitset <MAXPRIME> criba;
vector <int> primos;

int llena_criba(int n)
{
int cont=0;
  criba.set();   // marcamos a los N números naturales como primos
  for (int i=2; i<=n; i++)
    if (criba.test( i ))   // primo, dado que no ha sido tachado
    {
      primos.push_back( i );
      for (int j=2*i; j<=n; j+=i)
        criba.reset( j );  // tachamos a los múltiplos del número
     cont++;
    }
    return cont;
}

int main(int argc, char** argv)
{
	int k=10;
	int n;
	while(k--)
	{
		cin>>n;
		
		cout<<llena_criba(n)<<endl;
	}
	return 0;
}
