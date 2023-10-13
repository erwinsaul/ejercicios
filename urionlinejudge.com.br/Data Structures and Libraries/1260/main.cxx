/*  Problem: Hardwood Species
 *  Code: 1260
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	double t;
	string s;
	bool flag=false;
	map<string,int> arbol;
	map<string,int>::iterator it;
	getline(cin,s);
	istringstream ss(s);
	ss>>n;
	getline(cin,s);
	while(n--)
	{
		t=0;
		while(getline(cin,s))
		{		
			if(s.length()==0)
			  break;
			arbol[s]++;
			t++;
		}
		if(flag)
		  cout<<endl;
		flag=true;
		t=100.0/t;
		for(it=arbol.begin();it!=arbol.end();it++)
		{
			cout<<(*it).first;
			printf(" %.4f\n",((*it).second*t));
		}		
	  arbol.clear();	
	}
	return 0;
}

