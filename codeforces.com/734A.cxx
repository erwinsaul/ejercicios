#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	string s;
	int n,a=0,d=0;
	cin>>n;
	cin>>s;
	for(int k=0;k<n;k++)
	{
		if(s.at(k)=='A')
		{
			a++;
		}
		else
		{
			d++;
		}
	}
	if(a==d)
		cout<<"Friendship";
	else if(a>d)
		cout<<"Anton";
	else
		cout<<"Danik";
	
	return 0;
}

