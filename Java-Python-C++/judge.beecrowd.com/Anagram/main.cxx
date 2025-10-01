/*  Problem:  Anagram 
 *  Code: 195
 *  Site: uva.onlinejudge.org
 *  Type: Permutciones / Ordenacion
 *  Status : Accepted
 */      


#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
bool mySort(char x, char y)
 {
    if (tolower(x) - tolower(y))
	        return tolower(x) < tolower(y);
	    else
	        return x < y;
 }
 
int main(int argc, char **argv)
{
	char cad[10000];
	int n, tam;
	cin>>n;
	while(n--)
	{
		cin>>cad;
		tam=strlen(cad);
		sort (cad,cad+tam,mySort);
		 do
		 {
            for(int k=0;k<tam;k++)
              cout<<cad[k];
            cout<<endl;
     
         } while ( next_permutation (cad,cad+tam,mySort) );
        cout<<endl;
    }
	return 0;
}

