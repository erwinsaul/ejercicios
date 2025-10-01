/*  Problem: Multiples of 13
 *  Code: 1132
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int x,y,inf,sup;	
	long sum=0;
	cin>>x>>y;
	if(x>y)
	{
	   inf=y;
	   sup=x;
	}
	else
	{
	   inf=x;
	   sup=y;
	}
	
	for(int k=inf;k<=sup;k++)
	{
		if(k%13!=0)		
		  sum+=k;
	}
	cout<<sum<<endl;
	return 0;
}

