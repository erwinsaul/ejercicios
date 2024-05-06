/* Problem:Big Mod
 * Code: 374
 * Site: uva.onlinejudge.org
 * Status: Accepted
 * Type: Math
 */

#include <iostream>
using namespace std;
int modexp(int a, int b, int n)
{
	long long res;
	if(b==0)
	   return 1;
	else
	{
		res=modexp(a,b/2,n);
		res=(res*res)%n;
		if(b%2==1)
		  res=(res*a)%n;
		return (int)res;
	}
}
int main(int argc, char **argv)
{
    int a,b,n;
    while(cin>>a>>b>>n)
    {
		cout<<modexp(a,b,n)<<endl;
	}
    	
	return 0;
}

