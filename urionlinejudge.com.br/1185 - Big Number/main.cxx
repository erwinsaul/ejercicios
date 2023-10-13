/*  Problem: 1185 - Big Number
 *  Site: uva.onlinejudge.org
 *  Status: Accpeted
 *  Type: Math - Exponentiation
 */
#include <bits/stdc++.h>

using namespace std;

long factorial_digits(int n)
 {
	 double p=0;
	 int i;
	 for(i=2;i<=n;i++)
	     p+=log10(i);
	 return (long)p+1;	 
 }
 
int main(int argc, char **argv)
{
	int n, t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<factorial_digits(n)<<endl;
	}
	return 0;
}

