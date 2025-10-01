/*   Problem: Condorcet Winners
 *   Code: 2479
 *   Site: coj.uci.cu
 *   Status: Wrong Answer
 *   type: Simulacion
 */

#include <iostream>
#include <cstdio>
#include <map>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
	int b,c,d,t,r;
	map<int,int> m;
	map<int,int>::iterator it;
	int mayor;
	int sw;
	t=1;
	while(cin>>b>>c && b && c)
	{
		mayor=INT_MIN;
		for(int k=0;k<b;k++)
		{
			for(int j=0;j<c;j++)
			{
				scanf("%d",&d);
				m[d]+=(c-j);
				if(m[d]>mayor)
				   mayor=m[d];
			}
		}		
		sw=0;
		for(it=m.begin();it!=m.end();it++)
		{
			if((*it).second==mayor)
			{
				r=(*it).first;
				sw++;
			}
		}
		printf("Case %d: ",t);		
		if(sw==1)
		  printf("%d\n",r);
		else
		  printf("No Condorcet winner\n");		
		m.clear();
		t++;
		
	}
	return 0;
}

