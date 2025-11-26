/*  Problem: 108 - Maximum Sum
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Max 2D sum
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{	
	int n;
	int v[100][100];
	cin>>n;
	for(int k=0;k<n;k++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[k][j];
			if(k>0) v[k][j]+=v[k-1][j];
			if(j>0) v[k][j]+=v[k][j-1];
			if(k>0 && j>0) v[k][j]-=v[k-1][j-1];
		}
	}
	
	int maxSubRect=INT_MIN;
	int subRec;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=i;k<n;k++)
			{
				for(int l=j;l<n;l++)
				{
				  subRec=v[k][l];
				  if(i>0) subRec-=v[i-1][l];
				  if(j>0) subRec-=v[k][j-1];
				  if(i>0 && j>0) subRec +=v[i-1][j-1];
				  maxSubRect = max(maxSubRect,subRec);
				}
			}
		}
	}
	cout<<maxSubRect<<endl;
	
	return 0;
}

