/*   Problem: 1002 - New House
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Programacion Dinamica
 */

#include <bits/stdc++.h>

using namespace std;

char Sq[100][100];
int n;

int f(int x,int y)
{
   if (Sq[x][y] == '#' || (x>=n || y>=n))
   {
       return 0;
   }
   else
   {
       return 1+min( f(x+1,y), min(f(x,y+1), f(x+1,y+1) ));
   }
}

int main(int argc, char **argv)
{
	int t,r;	
	cin>>t;
	while(t--)
	{
		cin>>n;
		r=0;
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<n;i++)
			{
				cin>>Sq[k][i];
			}
		}		
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<n;i++)
			{
				r=max(r,f(k,i));
			}			
		}
		cout<<r<<endl;
	}
	return 0;
}

