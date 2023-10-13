/*  Problem: 11541 - Decoding
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: String 
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	int n;
	cin>>n;
	int r;
	char c;
	for(int i=1;i<=n;i++)
	{
		cin>>s;		
		r=0;
		cout<<"Case "<<i<<": ";
		for(int k=0;k<(int)s.length();k++)
		{
			if(isdigit(s.at(k)))
			{
			   r=r*10+s.at(k)-48;	
			}
			else
			{
				for(int j=0;j<r;j++)
				  cout<<c;
				c=s.at(k);
				r=0;
			}
		}		
		for(int j=0;j<r;j++)
		     cout<<c;
		cout<<endl;
	}
	
	return 0;
}

