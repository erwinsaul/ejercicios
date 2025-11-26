/*
 Problem: 3285 - Toby and Strange Function
 Site: coj.uci.cu
 Status: Pending
 */


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	string s,r;
	int n,t,p, tam;
	cin>>n;
	while(n--)
	{
		cin>>t>>s;
		tam = s.length();
		r = s;
		for(int k=0;k<tam;k++)
		{
			p = (k+t)%tam;			
			r.at(p)=s.at(k);		    
		}
		cout<<r<<endl;
	}
	return 0;
}

