/*   Problem: Joke
 *   Code: 1270
 *   Site: coj.uci.cu
 *   Status: Pending
 *   type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
	double x,y;
	double t;	
	cin>>x>>y;	
	if(y>x)
	   t=0;
	else
	{  	
	 t=x/y;	    
    }
    printf("%.0f",t);
	return 0;
}

