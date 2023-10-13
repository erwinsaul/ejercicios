/*   Problem: A. Jeff and Digits
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[10]={0};
	int n,d;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>d;
		v[d]++;
	}
	if(v[0]==0)
	   cout<<"-1";
	else if(v[5]<9)
	   cout<<"0";
	else
	{
	 for(int k=0;k<(v[5]-v[5]%9);k++)
	   cout<<5;
	 for(int k=0;k<v[0];k++)
	   cout<<0;
	}
	return 0;
}

