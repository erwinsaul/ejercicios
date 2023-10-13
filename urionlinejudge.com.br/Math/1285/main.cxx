/*  Problem: Different Digits
 *  Code: 1285
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */
 
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int digitos(int n)
{
	int v[10]={0};
	int d;
	while(n>0)
	{
		d=n%10;
		if(v[d]!=0)
		  return false;
		else
		v[d]=1;
		n=n/10;
	}
	return true;
}
int main(int argc, char **argv)
{
	int v[5001]={0};
	int n,m,t;
	for(int k=1;k<=5000;k++)
	{
		if(digitos(k))
		  v[k]=1;
	}
	while(cin>>n>>m)
	{
		t=0;
		for(int k=n;k<=m;k++)
		{
			 t+=v[k];
		}
		printf("%d\n",t);
	}
	return 0;
}

