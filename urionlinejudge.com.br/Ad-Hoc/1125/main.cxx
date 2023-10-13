/*  Problem: Formula 1
 *  Code: 1125
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(int argc, char **argv)
{
	int v[101][101];
	int p[101];
    int t,g,s,mayor, puntos,x,pos,tam;
    vector<int> r;    
    while(cin>>t>>g && t && g)
    {
		for(int k=1;k<=t;k++)
		{
			for(int i=1;i<=g;i++)
			{
				cin>>pos;
				v[k][pos]=i;
			}
		}
		
		cin>>s;		
		for(int k=0;k<s;k++)
		{
			cin>>x;
			memset(p,0,sizeof(p));
			mayor=0;		
			for(int i=1;i<=x;i++)
			{				
			  cin>>puntos;
			  for(int j=1;j<=t;j++)
		      {
			    p[v[j][i]]+=puntos;			  
			    if(p[v[j][i]]>mayor)
			       mayor=p[v[j][i]];			
			   }
		    }		    
		    for(int k=1;k<=100;k++)
		    {			  
			  if(p[k]==mayor)
			  {
			    r.push_back(k);
			  }
		    }
		    tam=(int)r.size();
		    for(int k=0;k<tam;k++)
		    {
				cout<<r[k];
				if((k+1)<tam)  
				   cout<<" ";
			}
		    cout<<endl;
		    r.clear();
	    }	
	}
	return 0;
}

