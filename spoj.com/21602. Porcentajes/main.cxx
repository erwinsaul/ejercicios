/* problem:Porcentajes
 * code: 21602
 * site: bo.spoj.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	int t;
	char c;
	while(getline(cin,s) && s.compare("#")!=0)
	{
		t = s.length();
		for(int k=0;k<t;k++)
		{
			c = s.at(k);
			if(c==' ')
			   cout<<"%20";
			else if(c=='!')
				cout<<"%21";
			else if(c=='$')
				cout<<"%24";
			else if(c=='%')
				cout<<"%25";
			else if(c=='(')
				cout<<"%28";
			else if(c==')')
				cout<<"%29";
			else if(c=='*')
				cout<<"%2a";
			else
				cout<<c;
		}
		cout<<endl;
	}
	return 0;
}

