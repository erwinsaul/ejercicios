/*   Problem:  Different Digits
 *   Code: 2120
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool diferentes(int n)
{
	int v[10]={0};
	while(n>0)
	{
		if(v[n%10]==1)
		   return false;
		v[n%10]=1;		
		n=n/10;
	}
	return true;
}
int main(int argc, char **argv)
{
	int v[5001];
	int n,m,sum;
	for(int k=0;k<5001;k++)
	{
		v[k]=diferentes(k);
	}
	while(cin>>n>>m)
	{
		sum=0;
		for(int k=n;k<=m;k++)
		   sum=sum+v[k];
		cout<<sum<<endl;
	}
	return 0;
}

