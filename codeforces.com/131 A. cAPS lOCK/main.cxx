/*   Problem: A. cAPS lOCK
 *   Site: codeforces - 187
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int mayus(string s)
{
	char c;
	int f;
	if(s.at(0)>='a' && s.at(0)<='z')
	{
		f=1;
		for(int k=1;k<(int)s.length();k++)
	    {
	      c=s.at(k);
	      if(c>='A' && c<='Z')
	       f=1;
	      else
	      {
	       f=0;
	       break;
	      }
        }
	}
	else
	{
		f=2;
		for(int k=0;k<(int)s.length();k++)
	    {
	      c=s.at(k);
	      if(c>='A' && c<='Z')
	       f=2;
	      else
	      {
	       f=0;
	       break;
	      }
        }
	}
	
	return f;
}


int main(int argc, char **argv)
{
	string s;
	cin>>s;
	int m=mayus(s);
	if(m==2)
	{
		for(int k=0;k<(int)s.length();k++)
		   cout<<(char)tolower(s.at(k));
	}
	else if(m==1)
	{
	    cout<<(char)toupper(s.at(0));
	    for(int k=1;k<(int)s.length();k++)
	         cout<<(char)tolower(s.at(k));
	}
	else
		cout<<s;
	return 0;
}

