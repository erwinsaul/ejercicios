/*  Problem: Drop
 *  Code: 1417 - Drop
 *  Site: coj.uci.cu
 *  Status: pending
 *  Type: WA
 */



#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	long double n;
	int j;
	bool flag=false;
	while(1)
	{
		cin>>n;
		if(n==0.0)
		   break;
		if(flag)
		   cout<<endl;
		flag=true;
		printf("Starting height: %.5Lf meter(s)\n",n);
		j=1;
		while(n>=(1.0/1000.0))
		{
			n=n/2.0;
			printf("Bounce #%d: %.10Lf meters\n",j,n);
			j++;
		}
	}
	
	return 0;
}

