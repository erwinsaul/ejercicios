/*  Problem: Diet Plan
 *  Code: 1248
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */


#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool encontrar(string &s, string a)
{
	char car;	
	int f;
	for(int k=0;k<(int)a.length();k++)
		{
			car=a.at(k);
			f=s.find(car);			
			if(f==-1)
			{
				return false;
			}
			else
			{
				s.erase(s.begin()+f);			
			}
		}
	return true;
}

int main(int argc, char **argv)
{
	string s;
	string t,a,c;
	bool b,ce;
	int n;	
	getline(cin,s);
	istringstream ss(s);
	ss>>n;		
	while(n--)
	{
		getline(cin,t);
		getline(cin,a);
		getline(cin,c);		
		sort(t.begin(),t.end());		
		sort(a.begin(),a.end());
		sort(c.begin(),c.end());		
	    b=encontrar(t,a);
	    ce=encontrar(t,c);
		if(b && ce)
		{
			cout<<t<<endl;
		}
		else
		{
			cout<<"CHEATER"<<endl;
		}
		
	}
	return 0;
}

