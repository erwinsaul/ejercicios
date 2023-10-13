/*Problem: Automatic Poetry 
 *Code:10361
 *Site:uva.onlinejudge.org
 *Status:Accepted
 */

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(int argc, char **argv)
{
	string cad1, cad2;
	string aux;
	int n;
	getline(cin,aux);
	n=aux.at(0)-48;
	for(int k=0;k<n;k++)
	{ 
		string s[5]="";
		getline(cin,cad1);
		getline(cin,cad2);
		int tam=cad1.length();
		int i=0;
	    for(int j=0;j<tam;j++)
	    {
			if(cad1.at(j)=='<' || cad1.at(j)=='>')
			   i++;
			else
			  s[i]=s[i]+cad1.at(j); 
		}	
		
		string f="...";
		int found=cad2.find(f);
		tam=cad2.length();
		cad2=cad2.substr(0,found)+s[3]+s[2]+s[1]+s[4]+cad2.substr(found+3);
		cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<endl;
		cout<<cad2<<endl;
	}
	return 0;
}

