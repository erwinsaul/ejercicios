/*   Problem: 1429 - Factorial Again!
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int f[]={1,1,2,6,24,120};
	int r,t;
	string s;
	while(cin>>s && s.compare("0")!=0)
	{		
		r=0;
		t=s.length();
		for(int k=0;k<t;k++)
		{
			r=r+((s.at(k)-48)*f[t-k]);			
		}
		cout<<r<<endl;
	}
	return 0;
}

