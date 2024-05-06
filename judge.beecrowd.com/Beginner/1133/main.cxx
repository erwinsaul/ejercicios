/*  Problem: Rest of a Division
 *  Code: 1133
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int x,y,inf,sup;
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
	for(int k=(inf+1);k<sup;k++)
	{
		if(k%5==2 || k%5==3)
		  cout<<k<<endl;
	}
	return 0;
}

