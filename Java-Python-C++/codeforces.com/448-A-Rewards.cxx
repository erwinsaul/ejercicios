/*
  Problem: 448-A-Rewards
  Site:codeforces.com
  Status:Accepted
 */


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	int a1,a2,a3,b1,b2,b3,n,a,b,r;
	r=0;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	a=a1+a2+a3;
	b=b1+b2+b3;
	r=r+(a/5)+((a%5)>0?1:0);
	r=r+(b/10)+((b%10)>0?1:0);	
	if(r<=n)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

