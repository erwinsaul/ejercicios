/* problem: Easy String Problem
 * code: 2815
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t, r, tam;
	string a,b;
	cin>>t;
	size_t pos;
	
	while(t--)
	{
		cin>>a>>b;
		tam = b.length();
		r=0;
		while(1)
		{
			pos = a.find(b);
			
			if(pos==string::npos)
			     break;
			a = a.substr(0, pos) + a.substr(pos+tam, a.length());			
			r++;
		}
		cout<<r<<endl;
	}
	return 0;
}

