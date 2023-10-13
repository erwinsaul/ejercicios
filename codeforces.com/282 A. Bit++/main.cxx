/*   Problem: A. Bit++
 *   Site: codeforces.com
 *   Status: Pending
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	int x=0;
	int n;
	cin>>n;
	int p;	
	while(n--)
	{
		cin>>s;
		p=s.find("X");
		if(p==0)
		{
			if(s.at(2)=='+')
			   x++;
			else
			  x--;
		}
		else
		{
			if(s.at(0)=='+')
			   ++x;
			else
			  --x;
		}
				
	}
	cout<<x;
	return 0;
}

