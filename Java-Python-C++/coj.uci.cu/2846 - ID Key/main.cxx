/* problem: ID Key
 * code: 2846
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	int t, a, b, c, tam;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		a=0;
		tam = s.length();
		for(int k=0;k<(int)s.length();k++)
		{
			a = a+ s.at(k)-48;
		}
		
		b=((s.at(tam-3)-'0')*100+(s.at(tam-2)-'0') * 10+(s.at(tam-1)-'0'))*10;
	
		c = a + b;
		
		if(c > 9999)
		{
			c= c % 10000;
		}
		else if(c<1000)
		    c= c + 1000;
		if(c > 1000 && c<10000)
			cout<<c<<endl;
	    else
	        {
				if(c>=0 && c<10)
				{
					cout<<"000"<<c<<endl;					
				}
				else if(c >= 10 && c<100)
				{
					cout<<"00"<<c<<endl;
				}
				else
				{
					cout<<"0"<<c<<endl;
				}
			}
	}
	return 0;
}

