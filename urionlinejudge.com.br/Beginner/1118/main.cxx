/*  Problem: Several Scores with Validation
 *  Code: 1118
 *  Site: www.urionlinejudge.com.br
 *  Status:Accepted
 *  Type: Beginner - 1
 */

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	double x,s;
	int t,n;
	int sw=0;
	t=0;
	while(true)
	{
		if(sw==0)
		{
		 cin>>x;
		 if(x<0.0||x>10.0)
		 {
			puts("nota invalida");
	 	 }
		 else
		 {
			t++;
			s=s+x;			
		 }	
		 	
		 if(t==2)
		 {
			printf("media = %.2f\n",(s/2.0));
			puts("novo calculo (1-sim 2-nao)");
			s=0;
			sw=1;
		 }
	    }		
	    
		if(sw==1)
		{ 
			cin>>n;
			if(n==1)
			{
				sw=0;
				t=0;
			}
		    else if(n==2)
		    {
		      break;
		    }
		    else if(n!=1||n!=2) 
		      puts("novo calculo (1-sim 2-nao)");
		 
		 }		
		
	}
	return 0;
}

