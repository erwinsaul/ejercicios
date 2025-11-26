/*   Problem:Binary Genocide
 *   Code: 2444
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */
 
#include <iostream>
#include <string.h>

using namespace std;

int unos(int n)
{
	int t=0;
	while(n>0)
	{
		t=t+n%2;
		n=n/2;
	}
	return t;
}

int main(int argc, char **argv)
{
    int v[1001];
    int n,c=0;
    memset(v,0,sizeof(v));
    for(int k=1;k<1001;k++)
    {
		if(unos(k)%2==0)
		{
			v[k]=unos(k);
		}
	}
	
	while(cin>>n)
	{
		if(v[n]) 
		   c++;
	}
	cout<<c<<endl;
	return 0;
}

