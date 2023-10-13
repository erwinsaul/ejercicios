/* Problem: Financial Management
 * Code: 1048
 * Site: acm.zju.edu.cn
 * Status: Pending
 * */        


#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
	double a,s;
	for(int k=0;k<12;k++)
	{
		cin>>a;
		s+=a;
	}
	printf("$%.2f\n",(s/12.0));
	return 0;
}

