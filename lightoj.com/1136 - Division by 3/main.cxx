/* Problem: Division by 3 
 * Code: 1136
 * Site: lightoj.com
 * Type: Math
 * Status: Accepted
 */


#include <iostream>
using namespace std;
int div(int n)
{
	if(n%3==2)
	  return ((n%3)*(n/3)+1);
	return ((n/3)*2);
}
int main(int argc, char **argv)
{
	int t,a,b;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>a>>b;
		cout<<"Case "<<k<<": "<<div(b)-div(a-1)<<endl;
	}
	return 0;
}

