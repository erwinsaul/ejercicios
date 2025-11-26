#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int t;
	int b;
	double x,y,f,e;
	int z,g;
	double j1, j2;
	cin>>t;
	while(t--)
	{
		cin>>b;
		cin>>x>>y>>z;
		cin>>e>>f>>g;
		j1 = (x + y)/2.0 + (((z % 2)==0)?b:0);
		j2 = (e + f)/2.0 + (((g % 2)==0)?b:0);

		if(j1>j2)
		{
			cout<<"Dabriel"<<endl;
		}
		else if(j1==j2)
		{
			cout<<"Empate"<<endl;
		}
		else
		{
			cout<<"Guarte"<<endl;
		}
	}
	return 0;
}

