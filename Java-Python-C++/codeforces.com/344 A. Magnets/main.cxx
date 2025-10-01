/* problem: A. Magnets
 * code: 344
 * site: codeforces.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,d=0;
	cin>>n;
	string s;
	string aux="";
	while(n--)
	{
		cin>>s;
		if(aux.length()==0)
		{
			aux=s;
		}
		else
		{
			if(aux.at(1)!=s.at(0))
			{
				aux=s;
			}
			else
			{
				d++;
				aux="";
				aux=s;
			}
		}
	}
	if(s.length()>0)
	  d++;
	cout<<d;
	return 0;
}

