/*   Problem: A. Plug-in
 *   Site: codeforces.com
 *   Status:TLE
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;


bool pares(string s)
{
	
	int t=s.length();
	for(int k=0;k<t-1;k++)
	{
		if(s.at(k)==s.at(k+1))
		  return true;
	}	
	return false;
}


string solve(string s)
{
	int t;
	while(pares(s))
	{
		t=s.length();
		for(int k=0;k<(t-1);k++)
		{
			if(s.at(k)==s.at(k+1))
			{		
				s=s.substr(0,k)+s.substr(k+2);				
				break;
			}
		}
	}
	return s;
}


int main(int argc, char **argv)
{
	string s;
	cin>>s;
	cout<<solve(s);	
	return 0;
}

