/*   Problem:  Lumberjack Sequencing
 *   Code: 1535
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    int n,ant,t;
    bool subiendo;
    bool bajando;
    bool fin;
    cin>>n;
    puts("Lumberjacks:");
    while(n--)
    {
			
		subiendo=false;
		bajando=false;
		fin=true;
		cin>>ant;
		cin>>t;		
		if(t<ant)
		{
			bajando=true;
			subiendo=false;
			ant=t;
		}
		if(t>ant)
		{
			bajando=false;
			subiendo=true;
			ant=t;
		}
		
		for(int k=2;k<10;k++)
		{
			cin>>t;
			if(t<ant && bajando)		
			{			  
			  fin=true;
			  ant=t;
			}			
			else if(t<ant && subiendo)
			{	
			  fin=false;	
		      bajando=false;
		      subiendo=false;
			}
			else if(t>ant && subiendo)
			{
				fin=true;
				ant=t;
			}
			else if(t>ant && bajando)
			{
				fin=false;
				bajando=false;
		        subiendo=false;
			}
		    	  
		}
	
		if(fin)
		   puts("Ordered");
		else
		   puts("Unordered");
	}	
	return 0;
}

