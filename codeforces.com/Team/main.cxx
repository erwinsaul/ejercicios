/* Problem: Team
 * Code: 231A
 * Site: codeforces.com
 * Status: Accepted
 * Type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
	int n, r=0;
	scanf("%d",&n);
	int a,b,c;
	for(int k=0;k<n;k++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if((a+b+c)>1)
		 r++;
	}
	cout<<r<<endl;
	return 0;
}

