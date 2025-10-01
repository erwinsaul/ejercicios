/* problem: A. Rewards
 * code: 448
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int a, b, c,copas, medallas, n,ct,mt;
	cin>>a>>b>>c;
	copas=a+b+c;
	cin>>a>>b>>c;
	medallas=a+b+c;
	cin>>n;
	ct=copas/5+((copas%5!=0)?1:0);
	mt=medallas/10+((medallas%10!=0)?1:0);
	n=n-ct-mt;
	if(n<0)
	  cout<<"NO";
	else
	  cout<<"YES";
	
	return 0;
}

