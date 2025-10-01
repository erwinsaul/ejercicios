/*
 * Problem: Div 3
 * Code: 1051
 * Site: coj.uci.cu
 * Status: Acceptec
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	long n;
	
	cin>>n;
	if(n%3==0||n%3==1)
	{
		cout<<(n/3)*2<<endl;
	}
	else
	{
		cout<<(n/3+1)*2-1<<endl;
	}
	

	return 0;
}

