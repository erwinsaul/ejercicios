/*  Problem: 12554 - A Special "Happy Birthday" Song!!!
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Simulacion
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string v[]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	vector<string> nombres;
	int t;
	string s;	
	cin>>t;
	while(t--)
	{
		cin>>s;
		nombres.push_back(s);
	}
	int k=1,cont;
	while(nombres.size()>(16*k))
	{
		k++;
	}
	cont=0;
	t=nombres.size();
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<16;j++)
		{
			if(cont==t)
			   cont=0;
			   
			cout<<nombres[cont]<<": "<<v[j]<<endl; 
			cont++;
		}
		
		
	}
	return 0;
}

