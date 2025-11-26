/* Problem: Mode Value
 * Code: 0028
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-hoc
 */

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char **argv)
{
	int v[101], n , max=0;
	memset(v,0,sizeof(v));
	while(cin>>n)
	{
		v[n]++;
		if(v[n]>max)
		   max=v[n];		
	}
	for(int k=1;k<=100;k++)
	{
		if(v[k]==max)
		  cout<<k<<endl;
	}
	return 0;
}

