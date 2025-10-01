/* Problem: Matrix-like Computation
 * Code: 0102
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-hoc
 */


#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	while(1)
	{
		cin>>n;		
		if(n==0)
		   break;
		int m[n+1][n+1];
		for(int k=0;k<(n+1);k++)
		   memset(m[k],0,sizeof(m[k]));
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>m[k][j];
				m[k][n]+=m[k][j];
				m[n][j]+=m[k][j];
				
			}		
		}
		for(int k=0;k<n;k++)
		{
			m[n][n]+=m[n][k];
		}
		for(int k=0;k<(n+1);k++)
		{
			for(int j=0;j<(n+1);j++)
			{
				printf("%5d",m[k][j]);
				
			}
			 cout<<endl;
		}
	}
	return 0;
}

