/*  Problem: 12250 - Language Detection
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: String
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    string s;
    int j=1;
    while(cin>>s && s.compare("#")!=0)    
    {	
		cout<<"Case "<<j<<": ";
		if(s.compare("HELLO")==0)
		   cout<<"ENGLISH";
		else if(s.compare("HOLA")==0)
		   cout<<"SPANISH";
		else if(s.compare("HALLO")==0)
		   cout<<"GERMAN";
		else if(s.compare("BONJOUR")==0)
		   cout<<"FRENCH";
		else if(s.compare("CIAO")==0)
		   cout<<"ITALIAN";
	    else if(s.compare("ZDRAVSTVUJTE")==0)
		   cout<<"RUSSIAN";
		else
		   cout<<"UNKNOWN";
		cout<<endl;
		j++;
	}
	return 0;
}

