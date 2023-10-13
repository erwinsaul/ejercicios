/*  Problem: Sequential IJ 4
 *  Code: 1098					
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>

using namespace std;


int main(int argc, char **argv)
{
	int j;
    double  i;	
	
	for(i=0.0;i<=2.0;i+=0.2)
	{
		for(j=1;j<=3;j++)
		{
		  cout<<"I="<<i<<" J="<<(j+i)<<endl;
		}
	}
	return 0;
}

