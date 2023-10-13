/* problem: Super Encryption
 * code: 2623
 * site: coj.uci.cu
 * status: WA
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s,a,b;
	cin>>s;
	int t,m;
	t = s.length();
	if(t%2==0)
	   m = t/2;
	else
	   m = (t+1)/2;
	a = s.substr(0, m);
	b = s.substr(m, t);
	s = string(a.rbegin(), a.rend()) + string(b.rbegin(), b.rend());
	cout<<s;
	return 0;
}

