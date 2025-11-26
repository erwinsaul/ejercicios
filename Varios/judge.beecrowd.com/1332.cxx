#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	string s, one="one", two="two" ;
	int t, uno, dos;
	cin>>t;
	while(t--)
	{
		cin>>s;
		uno=0;
		dos=0;
		if(s.length()==5)
		{
			cout<<"3"<<endl;
		}
		else
		{
			for(int k=0;k<3;k++)
			{
				if(s.at(k)==one.at(k))
				{
					uno++;
				}
			}
			
			for(int k=0;k<3;k++)
			{
				if(s.at(k)==two.at(k))
				{
					dos++;
				}
			}
			if(uno>dos)
				cout<<"1"<<endl;
			else
				cout<<"2"<<endl;
		}
	}
	return 0;
}

