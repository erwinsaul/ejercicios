/*
 * Problem: 510 A. Fox And Snake
 * Site: codeforces.com
 * Status: Accepted
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,m,s;
	cin>>n>>m;
	s=1;
	for(int k=0;k<n;k++)
	{
		if(k%2==0)
		{
			for(int i=0;i<m;i++)
			{
			   cout<<"#";
			}
			cout<<endl;
		}
		else
		{
			if(s==1)
			{
				for(int i=0;i<(m-1);i++)
				{
					cout<<".";
				}
				cout<<"#"<<endl;
				s=0;
			}
			else
			{
				cout<<"#";
				for(int i=1;i<m;i++)
				{
					cout<<".";
				}
				cout<<endl;		
				s=1;
			}
		}
	}
	return 0;
}

