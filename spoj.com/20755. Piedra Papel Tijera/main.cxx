/* problem: Piedra Papel Tijera
 * code: 20755
 * site: spoj.com
 * status:Accepted
 */
#include <bits/stdc++.h>

using namespace std;
//A PAPEL
//I PIEDRA
//T TIJERA
int ganador(char a, char b)
{
	if(a=='A')
	{
		if(b=='I')
		   return 1;
		if(b=='T')
		   return 2;
	}
	if(a=='I')
	{
		if(b=='T')
		   return 1;
		if(b=='A')
		   return 2;
	}
	if(a=='T')
	{
		if(b=='A')
		   return 1;
		if(b=='I')
		   return 2;
	}
    return 0;
}

int main(int argc, char **argv)
{
	int t, n, a, b;
	char c,d;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		a=0;
		b=0;
		for(int k=0;k<n;k++)
		{
			c=s.at(2*k);
			d=s.at(2*k+1);
			//cout<<c<<" "<<d<<endl;
			if(ganador(c,d)==1)
			   a++;
			if(ganador(c,d)==2)
			   b++;		       
		}
		if(a>b)
		  cout<<"Angela gana"<<endl;
	    else if(a==b)
		  cout<<"Empate"<<endl;
	    else
		  cout<<"Bernardo gana"<<endl;
	}
	return 0;
}

