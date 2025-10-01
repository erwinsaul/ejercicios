/* problem: LATIN
 * code: 2775
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t;
	cin>>t;
	string s;
	char c;
	while(t--)
	{
		cin>>s;
		c=s.at(0);
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		{
			cout<<s<<"cow";
		}
		else
		{
			for(int k=1;k<(int)s.length();k++)
			{
				cout<<s.at(k);
			}
			cout<<s.at(0)<<"ow";
		}
		cout<<endl;
	}
	return 0;
}

