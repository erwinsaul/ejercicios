/*
  Problem: 152-A-Marks
  Site:codeforces.com
  Status:Pending
 */


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	int n,m,mayor;
	char c;
	cin>>n>>m;
	int notas[n][m];
	map<int, int> r;
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<m;i++)
		{
			cin>>c;
			notas[k][i]=c-48;
		}
	}
	
	for(int k=0;k<m;k++)
	{
		mayor=INT_MIN;
		for(int i=0;i<n;i++)
		{
			if(notas[i][k]>mayor)
			{
				mayor=notas[i][k];				
			}
		}
		for(int i=0;i<n;i++)
		{
			if(notas[i][k]==mayor)
			{
				r[i]++;
			}
		}		
	}
	cout<<r.size();
	return 0;
}

