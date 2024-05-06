/*  Problem: 12403 - Save Setu
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Ad-Hoc	
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	long int t,k,a;
	string s;
	cin>>t;
	k=0;
	while(t--)
	{
		cin>>s;
		if(s.compare("report")==0)
		   cout<<k<<endl;
		else
		{
			cin>>a;
			k=k+a;
		}
	}
	return 0;
}

