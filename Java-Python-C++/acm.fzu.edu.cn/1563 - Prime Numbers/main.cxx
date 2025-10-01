/* Problem: Prime Numbers 
 * Code: 1563
 * Site: acm.fzu.edu.cn
 * Status: Pending
 * Type: Math
 */        

#include <bitset>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

#define MAXPRIME 1000000  // debe ser igual a la raiz cuadrada del máximo número que vamos a manejar
bitset <MAXPRIME> criba;


void llena_criba() 
{
  criba.set();   // marcamos a los N números naturales como primos
  for (int i=2; i<MAXPRIME; i++)
    if (criba.test( i ))   // primo, dado que no ha sido tachado
    {

      for (int j=2*i; j<MAXPRIME; j+=i)
        criba.reset( j );  // tachamos a los múltiplos del número

    }
}

int main(int argc, char **argv)
{
	int t, a, b, r, k;
	llena_criba();
	scanf("%d",&t);
	while(t--)
	{
		r=0;
		scanf("%d%d",&a,&b);
		for(k=a;k<=b;k++)
		{
			if(criba[k])
			  r++;
		}
		printf("%d\n",r);
	}
	return 0;
}

