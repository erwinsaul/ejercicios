/*   Problem: 15726. El Resto
 *   Code: 15726
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
using namespace std;

int fibonacci(long x, long y)
{
	long v[1000001];
	v[0]=1%y;
	v[1]=1%y;
	for(int k=2;k<=x;k++)
	{
		v[k]=v[k-1]%y + v[k-2]%y;
		
	}
	return v[x]%y;
}

int main(int argc, char **argv)
{
	int x,y;
	while(cin>>x>>y && (x || y))
	{
		cout<<fibonacci(y,x)<<endl;
    }
	return 0;
}

