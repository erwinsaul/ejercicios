/* Problem: Jolly Jumpers
 * Code: 10038
 * Site: uva.onlinejudge.org
 * Status: Accepted
 */    


#include <iostream>
#include <string.h>
#include <cmath>
#include <vector>


using namespace std;

int main(int argc, char **argv)
{
	int n, ant, sig, dif;
	
	while(cin>>n)
	{
	  cin>>sig;
	  bool d[3001];
	  memset(d,false,3001);
	  bool r=true;
	  for(int k=1;k<n;k++)
	  {
		  ant=sig;
		  cin>>sig;
		  
		  dif=fabs(ant-sig);
	
		
		  if(dif>(n-1)||dif==0||d[dif])
		  {
			  r=false;
		  }
		  d[dif]=true;
	  }
	  
	  if(r)
	  {
		  cout<<"Jolly"<<endl;
	  }
	  else
	     cout<<"Not jolly"<<endl;
	   	
    }		
	return 0;
}

