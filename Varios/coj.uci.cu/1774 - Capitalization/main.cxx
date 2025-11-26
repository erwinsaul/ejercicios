/* problem: Capitalization
 * code: 1774
 * site: coj.uci.cu
 * status: WA
 */
#include <bits/stdc++.h>

using namespace std;

bool is_ok(string s)
{
	for(int k=1;k<(int)s.length();k++)
	{
		if(!islower(s.at(k)))
		{
			return false;
		}
	}
	return true;
}

bool is_bad(string s)
{
	string cad="ÁÉÍÓÚÑ";
	bool f;
	for(int k=1;k<(int)s.length();k++)
	{
		if(!isupper(s.at(k)))
		{
			f=false;
			for(int j=0;j<6;j++)
			{
				cout<<s.at(k)<<endl;
				cout<<cad.at(k)<<endl;
				if(s.at(k)==cad.at(j))
				{
					cout<<"asdsad";
					f=true;
					break;
				}
			}
			if(!f)
			   return false;
		}
	}
	return true;
}

int main(int argc, char **argv)
{
	string s;
	cin>>s;
	if(is_ok(s))
	{
		cout<<s;
	}
    else if(is_bad(s))
    {
		for(int k=0;k<(int)s.length();k++)
		{
			if(isupper(s.at(k)))
			  cout<<(char)tolower(s.at(k));
			else
			  cout<<(char)toupper(s.at(k));
			
		}
	}
	else
	 cout<<s;
	
	return 0;
}

