/* problem: 20757. SPRITES
 * code: 20757
 * site: spoj.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;
int n,m;
int p[100][100];
char v[100][100];
int f[]={-1,0,1};
int c[]={-1,0,1};

int dfs(char d, int k , int j)
{
	int z;
	if(p[k][j]==1)
	   return d;
	if(k<0 || j<0)
	   return d;
	if(k>=n || j>=m)
	   return d;
	if(d!=v[k][j])
	   return d;
	
	p[k][j]=1;
	
	for(int h=0;h<3;h++)
	{
		for(int i=0;i<3;i++)
		{
			z=dfs(d, k+f[h], j+c[i]);
		}
	}
	return z;
}

int main(int argc, char **argv)
{
	int t,r, total;
	int resp[10];	
	cin>>t;
	for(int casos=1;casos<=t;casos++)
	{
		cin>>n>>m;
		memset(resp,0,sizeof(resp));
		total=0;
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>v[k][j];
				p[k][j]=0;
			}
		}
		
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<m;j++)
			{
				if(p[k][j]==0)
				{
					
					r=dfs(v[k][j],k,j);
					r=r-48;
					if(r!=0)
					{
						total++;
						resp[r]++;
					}
				}				
			}			
		}
		cout<<"Caso #"<<casos<<": "<<total<<endl;
		for(int k=1;k<=9;k++)
		{
			cout<<resp[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

