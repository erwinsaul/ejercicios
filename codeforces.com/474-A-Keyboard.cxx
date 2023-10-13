/*
  Problem: 474-A-Keyboard
  Site:codeforces.com
  Status:Accepted
 */


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	char c;
	string s;
	int p;
	char key[3][10]={{'q','w','e','r','t','y','u','i','o','p'},
				     {'a','s','d','f','g','h','j','k','l',';'},
				     {'z','x','c','v','b','n','m',',','.','/'}};
	cin>>c;
	cin>>s;
	if(c=='R')
	{
		p=-1;
	}
	else
	{
		p=1;
	}
	
	
	for(int k=0;k<(int)s.length();k++)
	{
		c=s.at(k);
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<10;j++)
			{
				if(c==key[i][j])
				{
					cout<<key[i][j+p];
					break;
				}
			}
		}
	}	
	return 0;
}

