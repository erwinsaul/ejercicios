/*   Problem:  Run-Length Encoding-Decoding
 *   Code: 1662
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin>>n;	
	string s;
	char c;
	int t;
	for(int k=0;k<n;k++)
	{
		cin>>s;
		char ant;
		t=0;
		cout<<"Case "<<(k+1)<<": ";
		for(int j=0;j<(int)s.length();j++)
		{
			c=s.at(j);
			if(c>='A'&&c<='Z')
			{
				for(int i=0;i<t;i++)
				{
					cout<<ant;
				}
				ant=c;
				t=0;
			}
			else
			   t=t*10+(c-48);
			
		}			
		for(int i=0;i<t;i++)
			{
				cout<<ant;
			}		
	    cout<<endl;
	}
	return 0;
}

