/*  Problem: Dancing Sentence 
 *  Code: 1234
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
using namespace std;

int main(int argc, char **argv)
{
	string s;
    bool flag=true;  
    while(getline(cin,s))
    {
		flag=true;
		for(int k=0;k<(int)s.length();k++)
		{
	     if(s.at(k)!=' ')
	     {
		 if(flag)
		 {
			cout<<(char)toupper(s.at(k));
			flag=false;
		 }
		 else
		 {
			cout<<(char)tolower(s.at(k));
			flag=true;
		 }
	     }
	     else
	       cout<<s.at(k);		 
	    }
	    cout<<endl;	    
	}	
	return 0;
}

