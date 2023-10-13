/*   Problem:  Bee
 *   Code: 1181
 *   Site: coj.uci.cu
 *   Status: Accepted	
 *   type: Math
 */


#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int fib(int n)
{
	int a=1,b=1,i,c;
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}
int main(int argc, char **argv)
{
	int n;
	while(1)
	{
	  cin>>n;
	  if(n<0)
	    break;	  
	  cout<<fib(n+3)-1<<" "<<fib(n+4)-1<<endl;
    }
	return 0;
}

