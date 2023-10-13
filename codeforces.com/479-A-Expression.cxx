/*
 * Problem:479 A. Expression
 * Site: codeforces.com
 * Status: Accepted
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int a,b,c, r=0;	
	cin>>a>>b>>c;
	r=max(r,(a+b)*c);
	r=max(r,a*(b+c));
	r=max(r, a*b*c);
	r=max(r, a+b+c);
	cout<<r;
	return 0;
}

