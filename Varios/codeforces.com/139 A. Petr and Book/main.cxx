/*   Problem: A. Petr and Book
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	int d[8];
	cin>>n;
	for(int k=1;k<=7;k++)
	   cin>>d[k];
	int i=1;
	while(n>0)
	{
		if(i>7)
		  i=1;
		n=n-d[i];
		i++;
	}
	cout<<i-1;
	return 0;
}

