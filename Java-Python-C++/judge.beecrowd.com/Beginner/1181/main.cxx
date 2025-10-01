/*  Problem: Line in Array
 *  Code: 1181
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Begginer
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main(int argc, char **argv)
{
	double m[12][12];
	int n;
	char s;
	double sum=0.0;
	cin>>n>>s;
	for(int k=0;k<12;k++)
	{
	  for(int j=0;j<12;j++)
	  {
		cin>>m[k][j];
   	  }	
	}
	for(int k=0;k<12;k++)
	{
		sum=sum+m[n][k];
	}
	if(s=='S')
	  printf("%.1f\n",sum);
	else
	  printf("%.1f\n",(sum/12.0));
	return 0;
}

