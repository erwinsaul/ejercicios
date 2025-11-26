/* problem: Validate ABC
 * code: 3137
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	int a,b,c, t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(b!=0)
		{
			if((a+b)==c)
			{
				cout<<"YES"<<endl;
			}
			else if((a-b)==c)
			{
				cout<<"YES"<<endl;
			}
			else if((a*b)==c)
			{
				cout<<"YES"<<endl;
			}
			else if((a/b)==c)
			{
				cout<<"YES"<<endl;
			}
			else if((a%b)==c)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
	    }
	    else
	    {
			if((a+b)==c)
			{
				cout<<"YES"<<endl;
			}
			else if((a-b)==c)
			{
				cout<<"YES"<<endl;
			}
			else if((a*b)==c)
			{
				cout<<"YES"<<endl;
			}			
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}

