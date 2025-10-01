/* Problem: Evil Numbers
 * Code: 
 * Site: coj.uci.cu
 * Type: Ad-hoc / String / Math
 * Status: Accepted
*/

#include <iostream>
#include <string>
using namespace std;

int sum(string n)
{
	int s=0;
	for(int k=0;k<(int)n.length();k++)
	{
		s+=(n.at(k)-48);
	}
	return s;
}

bool encontrado(string s)
{
	for(int k=0;k<(int)s.length();k++)
	{
		if(s.at(k)=='6')
		  return true;
	}
	return false;
}

bool solve(string n)
{
	int s=sum(n);
	if(encontrado(n))
	{
		if(s%6==0)
		{
			int m=(n.at(n.length()-1))-48;
			if(s%3==0&&m%2==0)
			   return true;
			else
			   return false;
		}
		else
		return false;
	}
	else
	  return false;
}

int main(int argc, char **argv)
{
	string n;
	while(cin>>n)
	{
		if(n[0]=='-')
		   n=n.substr(1,n.length());
		if(solve(n))
		   cout<<"EVIL"<<endl;
		else
		   cout<<"GOOD"<<endl;
	}
	return 0;
}

