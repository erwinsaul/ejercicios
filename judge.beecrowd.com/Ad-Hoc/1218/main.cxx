/*  Problem: Getline Three - Shoes
 *  Code: 1218
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	string s;
	istringstream ss;
	int n,m,f,t,p,k;
	char c;
	k=0;
	bool flag=false;
	while(getline(cin,s))
	{	
		if(flag)
		   cout<<endl;
		flag=true;
		k++;	
		m=0;
		f=0;
		p=0;
		ss.clear();
		ss.str(s);
		ss>>n;
		getline(cin,s);
		ss.clear();
		ss.str(s);
		while(ss>>t>>c)
		{
		  if(t==n)
		  {
			p++;
			if(c=='F')
			  f++;
			else
			  m++;
		 }
		}
		printf("Caso %d:\n",k);
		printf("Pares Iguais: %d\n",p);
		printf("F: %d\n",f);
		printf("M: %d\n",m);
	}
	return 0;
}

