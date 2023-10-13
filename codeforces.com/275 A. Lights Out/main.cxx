/*   Problem: A. Lights Out
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int m[3][3],x,y; 
    int aux[3][3];   
    for(x=0;x<3;x++)
	{
	  for(y=0;y<3;y++)
		m[x][y]=0;
	}
	
	int dx[]={-1, 0, 1, 0};
	int dy[]={0, -1, 0, 1};
	
	for(int k=0;k<3;k++)
	{
		for(int j=0;j<3;j++)
		   cin>>aux[k][j];			
	}
   
    for(int k=0;k<3;k++)
    {
		for(int j=0;j<3;j++)
		{			
			m[k][j]+=aux[k][j];
			for(int l=0;l<4;l++)
				{
					x=k+dx[l];
					y=j+dy[l];
					if(x>=0 && y>=0 && x<3 && y<3)
					  m[k][j]+=aux[x][y];
				}		
		}
	}
	for(int k=0;k<3;k++)
	{
		for(int j=0;j<3;j++)
		   cout<<(((m[k][j]%2)==0)?1:0);
		cout<<endl;
	}
    
	return 0;
}

