/*   Problem:  1240 - Bingo! 
 *   Site: coj.uci.cu
 *   Status: Accepted 
 *   type: String
 */


#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
	int n,b;
	int c,i;
	while(cin>>n>>b && (n || b))
	{
	    int m[b];
	    int v[n+1];
		c=0;	
		memset(v,0,sizeof(v));
		for(int k=0;k<b;k++)
		{
			cin>>m[k];
			for(int j=0;j<k;j++)
			{
				i=fabs(m[j]-m[k]);
				if(v[i]==0)
				{
					v[i]=1;
					c++;
				}
			}
		}
		
			
		if(c>=n)
		  cout<<"Y"<<endl;
		else
		  cout<<"N"<<endl;
		
	}
	return 0;
}

