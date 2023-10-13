/*  Problem: Grains in a Chess Board
 *  Code: 1169
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Math - 2
 */
 
#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdint.h>

using namespace std;
int main(int argc, char **argv)
{
	int n,t;
	uint64_t total,kg;
	cin>>n;		
	while(n--)
	{
		cin>>t;
		total=1;
		total=pow(2,t)-1;		
		kg=(total/12)/1000;
		cout<<kg<<" kg"<<endl;
	}
	return 0;
}

