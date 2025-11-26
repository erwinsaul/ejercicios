/* Problem: Product Subsequence
 * Code: 1046
 * Site: coj.uci.cu
 * Status: Accepted
 * Type: Ad-Hoc 
 * */

#include <iostream>

using namespace std;

long long pro(long long n)
{
	return n*(n+1)*(n+2);
}
int main(int argc, char** argv)
{
	long long t, a,b,k, sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>a>>b;
		for(k=a;k<=b;k++)
		{
			sum=sum+pro(k);
		}
		cout<<sum%100<<endl;
	}
	return 0;
}
