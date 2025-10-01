#include <iostream>
#include <map>
#include <string>
#include <iterator>

using namespace std;

map<string, int> indice;



int trago(string cadena)
{
    map<string,int>::iterator iter;
    iter=indice.find(cadena);
    return iter->second;
}


int main()
{
indice["ABSINTH"]=1;
indice["BEER"]=1;
indice["BRANDY"]=1;
indice["CHAMPAGNE"]=1;
indice["WINE"]=1;
indice["WHISKEY"]=1;
indice["VODKA"]=1;
indice["TEQUILA"]=1;
indice["SAKE"]=1;
indice["GIN"]=1;
indice["RUM"]=1;
indice["0"]=1;
indice["1"]=1;
indice["2"]=1;
indice["3"]=1;
indice["4"]=1;
indice["5"]=1;
indice["6"]=1;
indice["7"]=1;
indice["8"]=1;
indice["9"]=1;
indice["10"]=1;
indice["11"]=1;
indice["12"]=1;
indice["13"]=1;
indice["14"]=1;
indice["15"]=1;
indice["16"]=1;
indice["17"]=1;

     string bebida;
  int n,cantidad,casos;
  cin>>casos;
  while(casos--)
  {
    cantidad=0;
     cin>>n;
     if(n==-1)
        break;

     while(n--)
    {
        cin>>bebida;

      if(trago(bebida))
         cantidad++;
    }
    cout<<cantidad<<endl;

   } return 0;
}
