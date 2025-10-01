/* problem: A. Little Elephant and Rozdil
 * code: 205
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, x, r=0, menor=INT_MAX, c=0;
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		cin>>x;
		if(x<menor)
		{
			menor=x;
			r=k;
			c=1;
		}
		else if(x==menor)
		{
			c++;
		}
	}
	if(c==1)
	{
		cout<<r;
	}
	else
	{
		cout<<"Still Rozdil";
	}
	
	return 0;
}

