/*  Problem: 355 - The Bases Are Loaded
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: Math - Base
 */
#include <bits/stdc++.h>

using namespace std;

string itob(unsigned long long n,int b=10) //n->numero b->base
{
	string num="";
	int j,sign;
	if( (sign=n) <0 )
        n= -n;
	do 
	{
		j=n%b;
		num.push_back((j<10) ? (j+'0'): ('A'+j-10));
	}while((n/=b)!=0);
	if(sign < 0) 
       num.push_back('-');	
	return string(num.rbegin(),num.rend());
}

//DE BASE B A BASE 10
unsigned long long toten(string s, int b) 
{
	int tam=s.length();
	long int num=0;
	for(int k=0;k<tam;k++)
	{
		
	num=num+((isdigit(s.at(k))) ? (s.at(k)-48): (s.at(k)-'A'+10))*((long int)pow(b,tam-k-1));
	}
	return num;	
}

bool comprobar(string s, int b)
{
	int aux;
	for(int k=0;k<(int)s.length();k++)
	{
		aux=isdigit(s.at(k))?(s.at(k)-48):(s.at(k)-'A'+10);
		if(aux>=b)
		  return false;
	}	
	return true;
}

int main(int argc, char **argv)
{
	int o,d;
	string n,s;
	unsigned long long numero;
	while(cin>>o>>d>>n)
	{
		if(!comprobar(n,o))
		   cout<<n<<" is an illegal base "<<o<<" number"<<endl;
		else
		{
			numero=toten(n,o);
			s=itob(numero,d);
			cout<<n<<" base "<<o<<" = "<<s<<" base "<<d<<endl;
		}
	}
	return 0;
}

