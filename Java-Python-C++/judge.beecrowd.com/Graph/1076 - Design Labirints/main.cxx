/*  Problem: 1076 - Design Labirints
 *  Site: http://www.urionlinejudge.com.br/
 *  Status: Accepted
 *  Type: String 
 */
#include <bits/stdc++.h>

using namespace std;

vector<int> G[100];
bool visited[100];
int resp;

void dfs(int v) {
  visited[v] = true; 
  for(int u = 0; u < (int)G[v].size(); u++)
  {	  
     if(!visited[G[v][u]])
     {
		 resp++;
         dfs(G[v][u]);
	 }
  }  
}

int main(int argc, char **argv)
{
	int t;
	int o;
	int a;
	int v;
	int r,s;
	cin>>t;	
	while(t--)
	{
		cin>>o;
		cin>>v;
		cin>>a;
		resp=0;
		for(int k=0;k<a;k++)
		{
			cin>>r>>s;
			G[r].push_back(s);
			G[s].push_back(r);
		}	
		dfs(o);
		cout<<2*resp<<endl;
		for(int k=0;k<100;k++)
		   G[k].clear();
		memset(visited,false,sizeof(visited));
	}
	return 0;
}

