/*   Problem:1467 Zero or One
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[3];
	int a, b, c;
	while(cin>>a>>b>>c)
	{
		memset(v,0,sizeof(v));
		if(a==b && a!=c)
		{
			cout<<"C"<<endl;
		}
		else if(a!=b && a==c)
		{
			cout<<"B"<<endl;
		}
		else if(b==c && b!=a)
		{
			cout<<"A"<<endl;
		}
		else
		{
			cout<<"*"<<endl;
		}
	}
	
	return 0;
}

