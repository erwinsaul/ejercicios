#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,m;
	cin>>n>>m;
	int r=0;
	if(m>n)
		cout<<"-1";
	else
	{
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<n;j++)
			{
				if(k==j)
				{
					if(r<m)
					{
						cout<<"1"<<" ";
						r++;
					}					
					else
					{
						cout<<"0"<<" ";
					}
				}				
				else
				{
						cout<<"0"<<" ";
				}
			}
			cout<<endl;
				
		}
	}
	return 0;
}

