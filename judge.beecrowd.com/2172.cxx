#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	uint64_t a,b;
	while(cin>>a>>b && (a||b))
	{
		cout<<a*b<<endl;
	}
	return 0;
}

