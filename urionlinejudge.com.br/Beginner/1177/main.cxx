/*  Problem: Array Fill II
 *  Code: 1177
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	int v[1000];
	int aux=0;
	cin>>n;
	for(int k=0;k<=1000;k++)
	{
		v[k]=aux;
		if(aux<(n-1))
		{		  		
		  aux++;
		} 
		else
		{
		  aux=0;		
		}		
	}
	
	for(int k=0;k<1000;k++)
	   printf("N[%d] = %d\n",k,v[k]);
	return 0;
}

