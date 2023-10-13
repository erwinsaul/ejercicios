/*  Problem: 10282 - Babelfish
 *  Site: uva.onlinejudge.org
 *  Status:pending
 *  Type: Map
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s,llave,k;
	map<string, string> m;	
	int p;
	while(getline(cin,s) && s.length()>0)
	{
		p=s.find(' ');
		llave=s.substr(0,p);
		k=s.substr(p+1,s.length());
		m[k]=llave;
	}
	while(cin>>s)
	{
		if(m.find(s)!=m.end())
		  cout<<m[s]<<endl;
		else
		  cout<<"eh"<<endl;
	}
	return 0;
}

