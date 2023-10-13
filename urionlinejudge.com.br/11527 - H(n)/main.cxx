/*  Problem: 11526 - H(n)
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Math - Exponentiation
 */
#include <bits/stdc++.h>

using namespace std;

long long H(int n)
{
     long long res = 0;
     for( int i = 1; i <= n; i=i+1 ){
            res = (res + n/i);
      }
     return res;
}

int main(int argc, char **argv)
{
	for(int k=0;k<=10;k++)
	{
		cout<<H(k)<<endl;
	}
	
	return 0;
}

