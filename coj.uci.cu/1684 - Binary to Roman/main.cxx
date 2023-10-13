/*   Problem:  1684 - Binary to Roman
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: string / Math
 */



#include <iostream>
#include <cmath>

using namespace std;

string romano(int n)
{
   int i=0;
   int Vn[13]={ 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
   string Vc[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};   
   string x;
   while( n>0 )
   {
     if( n>=Vn[i] )
     {
       x=x+Vc[i];
       n = n - Vn[i];
     }
     else
     i++;
  }
   return x;
}

long int toten(string s, int b) 
{
	int tam=s.length();
	long int num=0;
	for(int k=0;k<tam;k++)
	{
		num=num+(s.at(k)-48)*((long int)pow(b,tam-k-1));
	}
	return num;
	
}

int main(int argc, char **argv)
{
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		n=toten(s,2);
		cout<<romano(n)<<endl;
	}
	return 0;
}

