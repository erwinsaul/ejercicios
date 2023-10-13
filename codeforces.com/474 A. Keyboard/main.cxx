/* problem:A. Keyboard
 * code: 474
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	string a="qwertyuiop";
	string b="asdfghjkl;";
	string c="zxcvbnm,./";
	char car;
	string s;
	int ia, ib, ic;
	cin>>car>>s;
	for(int k=0;k<(int)s.length();k++)
	{
		ia=a.find(s.at(k));
		ib=b.find(s.at(k));		
		ic=c.find(s.at(k));
		if(ia!=-1)
		{
			if(car=='R')
			{
				cout<<a.at(ia-1);
			}
			else
			{
				cout<<a.at(ia+1);
			}
		}
		else if(ib!=-1)
		{
			if(car=='R')
			{
				cout<<b.at(ib-1);
			}
			else
			{
				cout<<b.at(ib+1);
			}
		}
		else
		{
			if(car=='R')
			{
				cout<<c.at(ic-1);
			}
			else
			{
				cout<<c.at(ic+1);
			}
		}	
		
	}
	return 0;
}

