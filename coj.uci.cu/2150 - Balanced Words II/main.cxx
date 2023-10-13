/*   Problem: 2150 - Balanced Words II
 *   Code: 2150
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String
 */


#include <iostream>
#include <string>
using namespace std;


bool count(string s)
{
	int a=0,b=0;
	for(int k=0;k<(int)s.length();k++)
	{
		if(isupper(s.at(k)))
		   a++;
		else
		   b++;
	}
	return (a==b);
}

bool solve(string s, string c)
{
	
	int a=0,b=0,l=0,m=0;
	for(int k=0;k<(int)s.length();k++)
	{
		if(isupper(s.at(k)))
		   a++;
		else
		   b++;
	}
	
	for(int k=0;k<(int)c.length();k++)
	{
		if(isupper(c.at(k)))
		  l++;
		else
		   m++;
	}
	return ((a==l) && (b==m));
	
}


int main(int argc, char **argv)
{
	string s;
	string n,m;
	int t,d;
	cin>>t;
	while(t--)
	{
		cin>>s;
		d=s.length();
		if(d%2==0)
		{
		  n=s.substr(0,d/2);
		  m=s.substr(d/2,d);		
	    }
	    else
	    {
		  n=s.substr(0,d/2+1);
		  m=s.substr(d/2,d);		
		} 
		if(solve(n,m))
		   cout<<"SI"<<endl;
		else
		   cout<<"NO"<<endl;
	    
	}
	return 0;
}

