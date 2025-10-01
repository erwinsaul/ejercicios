/*   Problem: A. Ilya and Bank Account
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;     
int main(int argc, char **argv)
{
	long long n;
	int d;
	cin>>n;
	d=n%10;
	long long n1=n/10;
	long long n2=(n/100)*10+d;
	long long res=max(n1,n2);
	if(res>n)
	   cout<<res<<endl;
	else
	   cout<<n<<endl;
	
	
	return 0;
}

