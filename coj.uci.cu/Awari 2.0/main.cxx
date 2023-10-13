/*  Problem: Incobrable
 *  Code: 1190 - A
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Simulacion
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n, v[501], f;
	while(1)
	{
		cin>>n;
		if(n==-1)
		  break;
		for(int k=1;k<=n;k++)
		{
			cin>>v[k];
		}
		for(int k=1;k<=n;k++)
		{
			if(k==v[k])
			{
				for(int i=1;i<k;i++)
				{
					v[i]++;					
				}
				v[k]=0;				
				k=0;				
			}	
		}
		f=0;
		for(int i=1;i<=n;i++)
			{
			  f+=v[i];	
			}			
	    if(f==0)
	     cout<<"S"<<endl;
	    else
	     cout<<"N"<<endl;
	}
	return 0;
}

