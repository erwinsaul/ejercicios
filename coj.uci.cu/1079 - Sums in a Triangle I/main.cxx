/* problem:  Sums in a Triangle I
 * code: 1079
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int m[100][100];
int b[100][100];
int n;

int solve(int f, int c)
{
	if(f >=n )
	  return 0;
	if(b[f][c]==0)
	  m[f][c] = max(m[f][c] + solve(f+1,c), m[f][c] + solve(f+1, c+1));
	b[f][c] = 1;
	return m[f][c];
}

int main(int argc, char **argv)
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(b,0,sizeof(b) );
		cin>>n;
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<(k+1);j++)
			{
				cin>>m[k][j];
			}
		}
		cout<<solve(0,0)<<endl;
	}
	return 0;
}

