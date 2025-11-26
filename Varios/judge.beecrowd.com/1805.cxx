#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	uint64_t a, b, s;
	while(cin>>a>>b)
	{
		s = (b*b+b - a*a + a)/2;
		cout<<s<<endl; 
	}
	return 0;
}

