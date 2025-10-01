/* Problem: Age Sort
 * Code: 11462
 * Site: uva.onlinejudge.org
 * Type: Ordenacion 
 * Status: Accepted
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(int argc, char **argv)
{
	int n, d;
	while(true)
	{
		scanf("%d",&n);
		if(n==0)
		  break;
		vector<int> v;
		while(n--)
		{
			scanf("%d",&d);
			v.push_back(d);
		}
		sort(v.begin(),v.end());
		int tam=(int)v.size();
		for(int k=0;k<tam;k++)
		{
		   printf("%d",v[k]);
		   if((k+1)<tam)
		     printf(" ");
	    }
		printf("\n");
	}
	return 0;
}

