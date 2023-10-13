/* problem: Libertadores
 * code: 1536
 * site: www.urionlinejudge.com.br
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,a,b,pa,pb,ga,gb,e,f;
	char c;
	cin>>n;
	while(n--)
	{
		pa=pb=ga=gb=0;
		cin>>a>>c>>b;
		if(a>b)
		  pa=3;
		else if(a==b)
		{
			pa=1;
			pb=1;
		}
		else
		  pb=3;
	    
	    ga=ga+a;
	    gb=gb+b;
		
		cin>>e>>c>>f;
		if(f>e)
		  pa=pa+3;
		else if(e==f)
		{
			pa=pa+1;
			pb=pb+1;
		}
		else
		  pb=pb+3;
	    
	    ga=ga+f;
	    gb=gb+e;
        
       if(pa>pb)
		  puts("Time 1");
		else if(pb>pa)
		  puts("Time 2");
		else
		{
			if(ga>gb)
			  puts("Time 1");
			else if(gb>ga)
			  puts("Time 2");
			else if(ga==gb)
			{
				if(f>b)
				  puts("Time 1");
				else if(b>f)
				  puts("Time 2");
				else
				  puts("Penaltis");
			}			
		}
	}
	return 0;
}

