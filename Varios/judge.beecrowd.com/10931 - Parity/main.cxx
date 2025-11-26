/*  Problem: 10931 - Parity
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

string itob(long int n,int b=10) //n->numero b->base
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

int contar(string s)
{
	int r=0;
	for(int k=0;k<(int)s.length();k++)
	{
		r=r+(s.at(k)-48);
	}
	return r;
}

int main(int argc, char **argv)
{
	long int n;
	string s;	
	while(cin>>n && n)
	{	  
	  s=itob(n,2);
	  cout<<"The parity of "<<s<<" is "<<contar(s)<<" (mod 2).\n";	
	}
	return 0;
}

