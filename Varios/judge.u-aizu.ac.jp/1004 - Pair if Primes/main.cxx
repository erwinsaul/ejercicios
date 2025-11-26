/* Problem: Pair of Primes
 * Code: 1004
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Math - BitSet
 */      
 

#include <iostream>
#include <bitset>
#include <vector>
#define MAXPRIME 10001  // debe ser igual a la raiz cuadrada del máximo número que vamos a manejar

using namespace std;

bitset <MAXPRIME> criba;
vector <int> primos;

void llena_criba()
{
  criba.set();   // marcamos a los N números naturales como primos
  for (int i=2; i<MAXPRIME; i++)
    if (criba.test( i ))   // primo, dado que no ha sido tachado
    {
      primos.push_back( i );
      for (int j=2*i; j<MAXPRIME; j+=i)
        criba.reset( j );  // tachamos a los múltiplos del número

    }
}

int main(int argc, char **argv)
{
    llena_criba();
    criba[1]=0;
    int n, t;
    while(cin>>n)
    {
		t=0;
		for(int k=1;k<=n;k++)
		{
			if(criba[k]*criba[n-k+1]==1)
			   t++;
		}
		cout<<t<<endl;
	}
	return 0;
}

