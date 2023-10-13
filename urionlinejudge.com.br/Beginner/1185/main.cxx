/*  Problem:Above the Secundary Diagonal
 *  Code: 1185
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner
 */

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	char s;
	double m[12][12];
	double sum;
	cin>>s;
	int t=0;
	for(int k=0;k<12;k++)
	{
		for(int j=0;j<12;j++)
		{
			cin>>m[k][j];
			if((k+j)<=10)
			{
				sum=sum+m[k][j];
				t++;
			}			
		}
	}
	if(s=='S')
	  printf("%.1f\n",sum);
	else  
	  printf("%.1f\n",sum/(double)t);
	return 0;
}

