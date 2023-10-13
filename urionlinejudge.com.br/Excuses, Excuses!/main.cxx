/*Problem: Excuses, Excuses!
 *Code:409
 *Site:uva.onlinejudge.org
 *Status: Pending
 */

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string convertir(string cadena)
{
	string temp="";
	int tam=cadena.length();
	for(int k=0;k<tam;k++)
	{
		temp.push_back(toupper(cadena.at(k)));
	}
	
	return temp;
}

int main(int argc, char **argv)
{
    int f,e;
    int cont=0;
    while(cin>>f>>e)
    {
		string  words[20]="";
		string  ingreso[20]="";
		string  excusas[20]="";
		int mayor=-99999;
		int may[20]={0};
		cont++;
		for(int k=0;k<f;k++)
		{
			cin>>words[k];
			words[k]=convertir(words[k]);
			
		}
		getline(cin,excusas[0]);
		
		for(int k=0;k<e;k++)
		{
			getline(cin,ingreso[k]);
			excusas[k]=convertir(ingreso[k]);
		}
		
		int cant=0;
		int bus;
		int indice;
		
		for(int k=0; k<e ; k++)
		{
			cant=0;
			
            for(int j=0; j<f ; j++)
			{
				indice=0;				
			    bus=0;
				while(bus!=-1)
				{
				  bus=excusas[k].find(words[j], indice);
				  if(bus>=0)
				  {
				    cant++;
				    indice=bus+words[j].length();
				  }
				 				 			    
				}
			}
			if(cant>mayor)
			   mayor=cant;
			may[k]=may[k]+cant;
		}
		cout<<"Excuse Set #"<<cont<<endl;
		
		for(int k=0;k<e;k++)
		{
			if(may[k]==mayor)
			  cout<<ingreso[k]<<endl;
		}
		cout<<endl;
	}	
	return 0;
}

