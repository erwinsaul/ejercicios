#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	unsigned long n, m;
	cin>>n;
	cin>>m;
	if(n>=27)
	{
		cout<<m<<endl;
	}
	else
	{
		cout<<m % (unsigned long)pow(2,n)<<endl;
	}
	return 0;
}

