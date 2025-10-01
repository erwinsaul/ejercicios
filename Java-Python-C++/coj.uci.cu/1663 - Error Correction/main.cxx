/*   Problem:  1663 - Error Correction
 *   Code: 1663
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Matematicas
 */
 
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main(int argc, char **argv)
{
	int f[100],c[100];
	int t,d,cf,cc,pf,pc;
	while(cin>>t && t)
	{
		memset(f,0,sizeof(f));
		memset(c,0,sizeof(c));
		cf=0;
		cc=0;
		pf=0;
		pc=0;
		for(int k=0;k<t;k++)
		{
			for(int j=0;j<t;j++)
			{
				cin>>d;
				f[k]+=d;
				c[j]+=d;
			}
		}
		
		for(int k=0;k<t;k++)
		{
		  	if(f[k]%2!=0)
		  	{
				cf++;
				pf=(k+1);
			}
			
			if(c[k]%2!=0)
		  	{
				cc++;
				pc=(k+1);
			}
		}
		
		
		if(cf==0 && cc==0)
		{
			cout<<"OK"<<endl;
		}
		else if(cf==1 && cc==1)
		{
			printf("Change bit (%d,%d)\n",pf,pc);
		}	
		else 
		{
			cout<<"Corrupt"<<endl;
		}
	}
	return 0;
}

