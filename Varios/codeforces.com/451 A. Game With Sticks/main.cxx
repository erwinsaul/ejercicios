/* problem: A. Game With Sticks
 * code: 451
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,m,mini;
	cin>>n>>m;
	mini=min(n,m);
	if(mini%2==0)
	{
		cout<<"Malvika";
	}
	else
	{
		cout<<"Akshat";
	}
	return 0;
}

