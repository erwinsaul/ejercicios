/*  Problem: Dividing X by Y
 *  Code: 1116
 *  Site: www.urionlinejudge.com.br
 *  Status: pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	double x,y;
	while(n--)
	{
		cin>>x>>y;
		if(y==0)
		{
			puts("divisao impossivel");			
		}
		else
		   printf("%.1f\n",(x/y));
		  
		
	}
	return 0;
}

