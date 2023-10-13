#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a[5], b[5];
	bool f = true;
	for(int k=0;k<5;k++)
	{
		cin>>a[k];
	}
	for(int k=0;k<5;k++)
	{
		cin>>b[k];
	}
	for(int k=0;k<5;k++)
	{
		if(a[k]+b[k]!=1)
		{
			f = false;
		}
	}
	if(f)
		cout<<"Y"<<endl;
	else
		cout<<"N"<<endl;
	return 0;
}

