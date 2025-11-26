/*
 * Problem: 576 A. Vasya and Petya's Game
 * Site: codeforces.com
 * Status: Pending
 */
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	int n,k;
	vector<int> v;
	cin>>n;
	k=2;
	while(k<n)
	{
		v.push_back(k);
		k+=2;
	}
	k=3;
	while(k<n)
	{
		v.push_back(k);
		k+=2;
	}
	cout<<v.size()<<endl;
	for(int k=0;k<(int)v.size();k++)
	{
		cout<<v[k]<<" ";
	}
	return 0;
}

