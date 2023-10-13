/*  Problem: 11946 - Code Number
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: String 
 */
#include <bits/stdc++.h>

using namespace std;

char code(char c)
{
	char r;
	switch(c)
	{
		case '1':r='I';break;
		case '2':r='Z';break;
		case '3':r='E';break;
		case '4':r='A';break;
		case '5':r='S';break;
		case '6':r='G';break;
		case '7':r='T';break;
		case '8':r='B';break;
		case '9':r='P';break;
		case '0':r='O';break;
		default: r=c;break;		
	}
	return r;
}

int main(int argc, char **argv)
{
	string s;
	getline(cin,s);
	int n;
	istringstream ss (s);
	ss>>n;
	bool flag=false;
	while(n--)
	{
		if(flag)
		  cout<<endl;
		flag=true;
		while(getline(cin,s) && s.length()>0)
		{
			for(int k=0;k<(int)s.length();k++)
			  cout<<code(s.at(k));
			cout<<endl;
		}
	}
	
	return 0;
}

