/* problem: Lazy Unit Sum
 * code: 2948
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int sum(string s)
{
	int r=0;
	for(int k=0;k<(int)s.length();k++)
	{
		r=r+(s.at(k)-'0');
	}
	return r;
}

int main(int argc, char **argv)
{
	int n, t;
	string s;
	cin>>n;
	
	while(n--)
	{
		cin>>s;
		t=0;
		do
		{
			stringstream ss;
			t = sum(s);		
			ss << t;
			//cout<<t<<endl;
			s = ss.str();			
		}while(t>9);
		cout<<t<<endl;
	}
	return 0;
}

