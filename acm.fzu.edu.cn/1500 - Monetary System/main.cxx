/* Problem: Monetary System 
 * Code: 1500
 * Site: acm.fzu.edu.cn
 * Status: Wrong Answer
 * Type: Ad-Hoc / Math
 */          
   


#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	unsigned long long int n;
	double s=0.00;
	while(cin>>n)
	{
		s=n/2.0+n/3.0+n/4.0;
		printf("%.0f\n",floor(s));		
	}
	return 0;
}

