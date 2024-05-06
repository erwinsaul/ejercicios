/* problem: Sum of Two Squares
 * code: 1558
 * site: www.urionlinejudge.com.br
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[10001], n;
	memset(v,0,sizeof(v));
	for(int k=0; k<=100;k++)
	{
		for(int j=k;j<=100;j++)
		{
			if((k*k)+(j*j)<=10000)
				v[(k*k)+(j*j)]=1;
		}		   
	}
	while(cin>>n)
	{
		
		if(n>=0 && v[n]==1)
		   puts("YES");
		else
		   puts("NO");
	}
	return 0;
}

