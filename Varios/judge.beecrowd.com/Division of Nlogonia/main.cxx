/* Problem:  Division of Nlogonia
 * Code: 11498
 * Site: uva.onlinejudge.org
 * Type: Ad-Hoc
 * Status: Accepted
 */ 

#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int n,x,y,x1,y1;
	while(1)
	{
		cin>>n;
		if(n==0)
		   break;
		cin>>x>>y;
		for(int k=0;k<n;k++)
		{
			cin>>x1>>y1;
			if(x1==x || y==y1)
			  cout<<"divisa"<<endl;
			else
			{
				if(y1>y&&x1>x)
				  cout<<"NE"<<endl;
				if(y1>y&&x1<x)
				  cout<<"NO"<<endl;
				if(y1<y&&x1<x)
				  cout<<"SO"<<endl;
				if(y1<y&&x1>x)  
			   	  cout<<"SE"<<endl;
			}
			
		}
	}
	return 0;
}

