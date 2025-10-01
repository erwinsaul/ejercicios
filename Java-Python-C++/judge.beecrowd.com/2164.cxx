//Acepted
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n;	
	cin>>n;
	double r = (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
	printf("%0.1f\n", r);
	return 0;
}

