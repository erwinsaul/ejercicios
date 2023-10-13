#include <bits/stdc++.h>
using namespace std;

int memo[1000002];
int v[26];

int comp(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}


int contar(int v[], int n, int m)
{		
	int k=0;
	if((m%v[n-1]) == 0) 
		return (int)m/(int)v[n-1];
	memset(memo, 999999, sizeof memo); 
	memo[0] = 0;
	for(int i=0;i<n;i++)
	{
		k = v[i];
		for(int j = k; j <= m; j++)
		{
             memo[j] = min(memo[j], memo[j-k]+1);
		}
	}
	return memo[m];
}

int main(int argc, char **argv)
{
	int t;
	int m, n;	
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int k=0;k<n;k++)
		{
			cin>>v[k];
		}
		qsort(v, n, sizeof(int), comp);		
		cout<<contar(v,n,m)<<endl;		
	}
	
	return 0;
}

