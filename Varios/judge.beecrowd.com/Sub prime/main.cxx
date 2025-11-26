/* Problem: Sub-prime
 * Code: 11679
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math / Simulacion
 * Status: Accepted
*/


#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char **argv)
{
    int b, n;
    int d,a,deuda;
    while(1)
    {
		cin>>b>>n;
		if(b==0 && n==0)
		   break;
		int v[b+1];
        memset(v,0,sizeof(v));	
        bool flag=true;
        for(int k=1;k<=b;k++)
        {
			cin>>v[k];
		}
		for(int k=0;k<n;k++)
		{
			cin>>d>>a>>deuda;
			v[d]=v[d]-deuda;
			v[a]=v[a]+deuda;
		}
		for(int k=1;k<=b;k++)
        {
			if(v[k]<0)
			  flag=false;
		}
		if(flag)
		  cout<<"S"<<endl;
		else
		  cout<<"N"<<endl;
	}
	return 0;
}

