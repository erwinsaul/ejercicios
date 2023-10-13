/*   Problem:  Encoded Message
 *   Code: 2281
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Simulacion / String
 */


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	char m[100][100];
	string s;
	int t,f,i;
	cin>>t;
	while(t--)
	{
		cin>>s;
		f=sqrt(s.length());
		i=0;
		for(int k=0;k<f;k++)
		{
			for(int j=(f-1);j>=0;j--)
			{
				m[j][k]=s.at(i);
				i++;
			}
		}
		
		for(int k=0;k<f;k++)
		{
			for(int j=0;j<f;j++)
			{
				cout<<m[k][j];
			}
		}
		cout<<endl;
	}
	return 0;
}

