/*  Problem: 11185 - Ternary
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: Math - Exponentiation
 */
#include <bits/stdc++.h>

using namespace std;

string itob(long long n,int b=10) 
{
	string num="";
	int j,sign;
	if( (sign=n) <0 )
        n= -n;
	do 
	{
		j=n%b;
		num.push_back((j<10) ? (j+'0'): ('A'+j-10));
	}while((n/=b)!=0);
	if(sign < 0) 
       num.push_back('-');	
	return string(num.rbegin(),num.rend());
}

int main(int argc, char **argv)
{
    long long n;
    while(cin>>n && n>=0)	
    {
		cout<<itob(n,3)<<endl;
	}
	return 0;
}

