/*   Problem: Fibonacci Terms
 *   Code: 1848
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */
 

#include <iostream>

using namespace std;

int v[10001];

void fibonaci()
{
	for(int k=2;k<10001;k++)
	{
		v[k]=(v[k-1]%10000+v[k-2]%10000)%10000;
	}
}

int main(int argc, char **argv)
{
	int t,n;
	v[0]=0;
	v[1]=1;
	fibonaci();
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<v[n-2]<<" "<<v[n-1]<<" "<<v[n]<<endl;
	}
	return 0;
}

