/*   Problem: Sereja and Array
 *   Code: B
 *   Site: codeforces - 187
 *   Status: Pending
 *   type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
    int v[100001];    
    int n,m,c,d,i;
    scanf("%d %d",&n,&m);
    for(int k=1;k<=n;k++)
    {
		scanf("%d",&v[k]);
	}	
	
	int u=0;	
	
	for(int k=0;k<m;k++)
	{
		scanf("%d",&c);		
		if(c==1)
		{
			scanf("%d %d",&i,&d);
			v[i]=d-u;
		}
		if(c==2)
		{
			scanf("%d",&d);
			u=u+d;
		}
		if(c==3)
		{
			scanf("%d",&d);
			printf("%d\n",(v[d]+u));
		}
	}
	
	return 0;
}

