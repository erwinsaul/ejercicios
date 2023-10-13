/*
 Problem: 3253 - Union of Sets
 Site: coj.uci.cu
 Status: Accepted
 */


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	map<int, int> m;
	int n, c, d;
	cin>>n;
	while(n--)
	{
		cin>>c;
		for(int k=0;k<c;k++)
		{
			cin>>d;
			m[d]++;
		}
	}
	cout<<m.size();
	return 0;
}

