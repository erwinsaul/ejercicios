/* Problem: Duplicate Pair
 * Code: 1001
 * Site: acm.fzu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc 
 */      


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n, d, s;	
	while((scanf("%d",&n))!=EOF)
	{
		s=0;
		for(int k=0;k<n;k++)
		{
			scanf("%d",&d);
			s=s+d;
			s=s-k;
		}
		printf("%d\n",s);		
	}
	return 0;
}

