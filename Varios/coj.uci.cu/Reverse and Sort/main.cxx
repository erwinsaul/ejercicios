/*  Problem: Rock-Paper-Scissors Tournament
 *  Code: 10903
 *  Site: coj.uci.cu
 *  Type: Ad-Hoc / Ordenacion
 *  Status: Accepted
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

unsigned long long reverse(unsigned long long n)
{
	unsigned long long s=0;
	int d;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		s=s*10+d;
	}
	return s;
}


int main(int argc, char **argv)
{
	int n;
	cin>>n;
	vector<unsigned long long> v;
	unsigned long long d;
	while(n--)
	{
		cin>>d;
		d=reverse(d);
		v.push_back(d);
	}
	sort(v.begin(),v.end());
	for(int k=0;k<(int)v.size();k++)
	{
		cout<<v[k]<<endl;
	}
	return 0;
}

