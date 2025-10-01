#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a, b;
	cin>>a>>b;
	int m = min(a,b);
	a = a - m;
	b = b - m;
	int t = a/2 + b/ 2;
	cout<<m<<" "<<t<<endl;
	return 0;
}

