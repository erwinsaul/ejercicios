/*   Problem: B. Buttons
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: String
 */

#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	if(n<=2)
	  cout<<(n*n)-(n-1);
	else
	  cout<<(n*n)-2;
	return 0;
}

