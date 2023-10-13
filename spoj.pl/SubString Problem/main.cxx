/* Problem: SubString Problem
 * Code: 6898 SUB_PROB
 * Site:spoj.pl
 * Type: String
 * Status: Time Limit Exced
 */

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(int argc, char **argv)
{
	
	char c[100001];
	int n,k;
	size_t f;
    scanf("%s",c);
    string s(c);
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%s",c);
		string b(c);
		if((f=s.find(b))!=string::npos)
		   printf("Y\n");
		else
		   printf("N\n");
	}
	
	return 0;
}

