/*  Problem: Average 2
 *  Code: 1006
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
	float a,b,c;
	cin>>a>>b>>c;
	b= (a*2 + b*3 + c*5)/10.0;
	printf("MEDIA = %.1f\n",b);
	return 0;
}

