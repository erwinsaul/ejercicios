#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n, s;
	int m[101][101];	
	cin>>n;
	for(int k=0;k<(n+1);k++)
	{
		for(int i=0;i<(n+1);i++)
		{
			cin>>m[k][i];			
		}
	}
	
	
	for(int k=0;k<=(n-1);k++)
	{
		for(int i=0;i<=(n-1);i++)
		{
			s =m[k][i] + m[k][i+1] + m[k+1][i] + m[k+1][i+1] ;
			if(s>=2)
				cout<<"S";
			else
				cout<<"U";
		}
		cout<<endl;
	}
	
	return 0;
}

