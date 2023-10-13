/*   Problem: Prime Numbers Again
 *   Code: 2175
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */
#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
#define MAXPRIME 1000000  // debe ser igual a la raiz cuadrada del máximo número que vamos a manejar

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
	int n,d,k;
	llena_criba();
	vector<int>::iterator it;
	cin>>n;	
	while(n--)
	{
		cin>>d;
		k=0;
		if(find(primos.begin(),primos.end(),d)!=primos.end())
		{
	       cout<<d<<" "<<d<<endl;
	    }
	    else
	    {
		 while(d>primos[k])
		 {
		  k++;		
	     }		
	     cout<<primos[k-1]<<" "<<primos[k]<<endl;		
	    }
	}
	return 0;
}

