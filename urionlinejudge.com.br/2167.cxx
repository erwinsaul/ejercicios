#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n, d, p;
	cin>>n;
	int ant = 0;
	p = 0;
	bool f=true;
	for(int k=1;(k<=n) & f;k++)
	{
		cin>>d;
		if(d < ant)
		{
			p = k;
			f = false;
		}
		ant = d;
		
	}
	cout<<p<<endl;
	return 0;
}

