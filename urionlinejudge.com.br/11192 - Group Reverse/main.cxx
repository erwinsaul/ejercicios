/*  Problem: 11192 - Group Reverse
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Ad-hoc
 */


#include <bits/stdc++.h>

using namespace std;

string reverse(string s)
{
	return string(s.rbegin(),s.rend());
}


int main(int argc, char **argv)
{
	int n,t;
	string s;
	while(cin>>n && n)
	{
		cin>>s;		
		t=s.length()/n;		
		for(int k=0;k<n;k++)
		{	
			cout<<reverse(s.substr((t*k),t));
	    }
	    cout<<endl;
	}
	return 0;
}

