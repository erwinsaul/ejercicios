/* problem:A. MUH and Sticks
 * code: 471
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[10], r, a, b;
	memset(v,0,sizeof(v));
	for(int k=0;k<6;k++)
	{
		cin>>r;
		v[r]++;
	}
	sort(v,v+10);
	if(v[9]==4)
	{
		a=v[8];
		b=v[7];
		if(a!=b)
		{
			cout<<"Elephant";
		}
		else
		{
			cout<<"Bear";
		}
	}
	else if(v[9]==5)
	{
		cout<<"Bear";
	}
	else if(v[9]==6)
	{
		cout<<"Elephant";
	}
	else
	{
		cout<<"Alien";
	}
	return 0;
}

