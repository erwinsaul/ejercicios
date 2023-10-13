/* problem: Numeracy
 * code: 3080
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t, a,b,c;
	char op, igual;
	cin>>t;
	while(t--)
	{
		cin>>a>>op>>b>>igual>>c;
		if(b==0 && op =='/')
		{
		  cout<<"No"<<endl;
	    }
		else
		{
			if(op=='+')
			{
				if(a+b==c)
				  cout<<"Yes"<<endl;
				else
				  cout<<"No"<<endl;
			}
			else if(op=='-')
			{
				if(a-b==c)
				  cout<<"Yes"<<endl;
				else
				  cout<<"No"<<endl;
			}
			else if(op=='*')
			{
				if(a*b==c)
				  cout<<"Yes"<<endl;
				else
				  cout<<"No"<<endl;
			}
			else
			{
				if(a/b==c)
				  cout<<"Yes"<<endl;
				else
				  cout<<"No"<<endl;
			}
		}
	}
	return 0;
}

