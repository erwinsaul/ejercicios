/*  Problem: All You Need Is Love 
 *  Code: 1307
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

unsigned long bin(string s)
{
	unsigned long t=0;
	int tam=s.length();
	for(int k=0;k<tam;k++)
	{
		t=t+(s.at(k)-'0')*pow(2,tam-1-k);
	}
	return t;
}

int gcd(unsigned long x,unsigned long y)
{
	return y ? gcd(y,x%y):abs(x);
}

int main(int argc, char **argv)
{
	int t;
	unsigned long n,m;
	string a,b;
	
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>a>>b;
		n=bin(a);
		m=bin(b);
		cout<<"Pair #"<<k<<":";
		if(gcd(n,m)==1)
		  cout<<" Love is not all you need!"<<endl;
		else
		  cout<<" All you need is love!"<<endl;
	}
	return 0;
}

