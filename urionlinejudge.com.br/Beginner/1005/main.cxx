/*  Problem: Average 1
 *  Code: 1005
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
	float a,b;
	cin>>a>>b;
	b= (a*3.5 + b*7.5)/11.0;
	printf("MEDIA = %.5f\n",b);
	return 0;
}

