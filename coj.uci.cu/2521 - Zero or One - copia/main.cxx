/* problem: Zero or One
 * code: 2521
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if(a!=b && a!=c)
		{
			cout<<"A"<<endl;
		}
		else if(b!=a && b!=c)
		{
			cout<<"B"<<endl;
		}
		else if(c!=a && c!=b)
		{
			cout<<"C"<<endl;
		}
		else
		{
			cout<<"*"<<endl;
		}
	}
	return 0;
}

