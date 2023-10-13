#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	char c;
	int r=0;
	while(cin>>c)
	{
		if(c=='1')
		{
			r++;
		}
		cout<<c;
	}
	if(r%2==0)
	{
		cout<<'0'<<endl;
	}
	else
	{
		cout<<'1'<<endl;
	}
	return 0;
}

