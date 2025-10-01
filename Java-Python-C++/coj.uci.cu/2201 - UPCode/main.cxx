/*   Problem: 2201 - UPCode
 *   Code: 1035
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Simulacion / String
 */


#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	int a, b,c,j,t=1;
	while(cin>>s)
	{
		j=1;
		a=0;
		b=0;
		c=0;
		for(int k=0;k<(int)s.length();k++)
		{
			if(isdigit(s.at(k)))
			{
				if(j%2!=0)
				{				
					a=a+(s.at(k)-48);
				}
				else
				{				
					b=b+(s.at(k)-48);
				}
				j++;
			}
		}
		j=(3*a+b);		
		while((c+j)%10!=0)
		{
			c++;
		}
		cout<<"Case #"<<t<<": "<<c<<endl;
		t++;
    }
	return 0;
}

