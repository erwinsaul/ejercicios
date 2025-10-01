/* problem: Quadrants
 * code: 2845
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	double x,y;
	while(cin>>x>>y )
	{
		if(x==0 || y==0)
		{
			cout<<"AXIS"<<endl;
			if(x==0 && y==0)
			  break;	
		}
		else if(x > 0.0 && y > 0.0)
		{
			cout<<"Q1"<<endl;
		}
		else if( x > 0.0 && y < 0.0)
		{
			cout<<"Q4"<<endl;
		}
		else if(x < 0.0 && y > 0.0)
		{
			cout<<"Q2"<<endl;
		}		
		else
		{
			cout<<"Q3"<<endl;
		}
			
	}
	return 0;
}

