/*  Problem: Sum of Consecutive Odd Numbers II
 *  Code: 1099					
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int x,y,mayor,menor,n,sum;
	cin>>n;
	while(n--)
	{
		sum=0;
		cin>>x>>y;		
		if(x>y)
		 {
			 mayor=x;
			 menor=y;
		 }
		 else
		 {
			 mayor=y;
			 menor=x;
		 }

		 for(int k=(menor+1);k<mayor;k++)
		 {
			 if(k%2!=0)
			    sum+=k;
		 }
		 cout<<sum<<endl;
	}
	
	return 0;
}

