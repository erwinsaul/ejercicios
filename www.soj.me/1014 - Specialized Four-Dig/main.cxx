/*  Problem:Specialized Four-Dig
 *  Code: 1014
 *  Site: www.soj.me
 *  Status: Accepted
 *  Type: Ad-Hoc
 */



#include <iostream>
#include <string>
#include <sstream>


using namespace std;

//integer to any base

string reverse(string s)
{ 
	return string(s.rbegin(),s.rend());
}

string itob( int n, int b=10) //n=numero b=base
{
	string num="";
	int j, sign;
	if((sign=n) < 0 )
	    n=-n;
	do
	{
		j=n%b;
		num.push_back((j<10) ? (j+'0'): ('A'+j-10));
	}while((n/=b)!=0);
	if(sign < 0)
	    num.push_back('-');
	return (reverse(num));
}
//

int suma(string s)
{
	int tam=s.length();
	int suma=0;	
	for(int k=0;k<tam;k++)
	{
		if(s.at(k)>='0' && s.at(k)<='9')
		{
		   suma=suma+s.at(k)-48;
	    }
	    else
	      suma=suma+s.at(k)-'A'+10;
	}
	
	return suma;
}

bool es_igual(int a, int b, int c)
{
	return (a==b && b==c);
}
int main(int argc, char **argv)
{
	
	string a,b,c;
	for(int k=1000;k<=9999;k++)
	{
		
		a=itob(k,10);
		b=itob(k,12);
		c=itob(k,16);
		if(es_igual(suma(a),suma(b),suma(c)))
		   cout<<k<<endl;
    }
	
	return 0;
}

