/*  Problem: 492 - Pig-Latin
 *  Site: uva.onlinejudge.org
 *  Status: WA
 *  Type: String 
 */
#include <bits/stdc++.h>

using namespace std;

bool vocal(char c)
{
	c=tolower(c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	      return true;
	return false;
}

bool letra(char c)
{
	c=tolower(c);
	if(c >='a' && c <='z')
	      return true;
	return false;
}

string solve(string s)
{
	int t=s.length();	
	char c; //guardar c	
	string r;
	for(int k=0;k<t;k++)
	{
		
	}
	return r;
}



int main(int argc, char **argv)
{
	string s;	
	while(getline(cin,s))
	{
	  cout<<solve(s);	  
	  cout<<endl;
    }
	return 0;
}

