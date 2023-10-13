/*   Problem: 4215 - Feynman
 *   Site: icpcarchive.ecs.baylor.edu
 *   Status: Accepted
 *   type: Math
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	while(cin>>n && n)
	{
		cout<<(n*(n+1)*(2*n+1))/6<<endl;
	}
	return 0;
}

