/*  Problem: Sum of Consecutive Odd Numbers I
 *  Code: 1071
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x, y,sum;
	int may,men;
	cin>>x>>y;
	if(x>y)
	{
		may=x;
		men=y;
	}
	else
	{
		may=y;
		men=x;
	}
	sum=0;
	for(int k=men+1;k<may;k++)
	{
		if(k%2!=0)
		{
		   sum=sum+k;
		}		
	}
	cout<<sum<<endl;
	return 0;
}

