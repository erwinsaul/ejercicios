/* Problem:  Beat the Spread!
 * Code: 10812
 * Site: uva.onlinejudge.org
 * Status: Accepted
 */      


#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int t,a,b,c,f;
	cin>>t;
	while(t--)
	{
		cin>>c>>f;
		if((c+f)%2==0)
		{
		 a=(c+f)/2;
		 b=c-a;
		
	 	 if(b<0 || a<0)
		   cout<<"impossible"<<endl;
	     else
	       {
			  if(a>b)
			    cout<<a<<" "<<b<<endl;
			  else
			    cout<<b<<" "<<a<<endl;
		   }
		}
		else
		   cout<<"impossible"<<endl;  
	}
	return 0;
}

