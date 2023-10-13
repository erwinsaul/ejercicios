/*  Problem:Above Average 
 *  Code: 1214
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */

#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(int argc, char **argv)
{
	int n,t;
	cin>>n;
	int v[1001];
	int sum;
	double prom;
	while(n--)
	{
		cin>>t;
		sum=0;
		prom=0;
		memset(v,0,sizeof(v));
		for(int k=0;k<t;k++)
		{
			cin>>v[k];
			sum=sum+v[k];
		}
		prom=(double)sum/(double)t;
		sum=0;
		for(int k=0;k<t;k++)
		{
			if(v[k]>prom)
			  sum++;
		}
		prom=double(sum*100.0)/(double)t;
		printf("%.3f",prom);
		cout<<"%"<<endl;
	}
	return 0;
}

