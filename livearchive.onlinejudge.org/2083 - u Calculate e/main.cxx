/* Problem: u Calculate e 
 * Code: 2083
 * Site: livearchive.onlinejudge.org
 * Type: Ad-Hoc / Math
 * Status: Accepted
 */

#include <iostream>
#include <stdio.h>

using namespace std;
int fact(int n)
{
	int f=1;
	if(n==0 || n==1) return 1;
	
	for(int k=1;k<=n;k++)
	{
		f=f*k;
	}
	return f;
}
int main(int argc, char **argv)
{
	cout<<"n e"<<endl;
    cout<<"- -----------"<<endl;
    cout<<"0 1"<<endl;
    cout<<"1 2"<<endl;
    cout<<"2 2.5"<<endl;
    for(int k=3;k<=9;k++)
    {
		double sum=0;
		for(int j=0;j<=k;j++)
		{
			sum=sum+(1.0/fact(j));
		}
		printf("%d %.9f\n",k,sum);
		
	}
	return 0;
}

