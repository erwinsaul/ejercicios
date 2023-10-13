/*  Problem:Specialized Four-Dig
 *  Code: 1007
 *  Site: www.soj.me
 *  Status: Accepted
 *  Type: Math
 */


#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	string s;
	int a, fila,p,sw,i;
	bool flag=true;
	char m[200][200];
	while(cin>>a && a)
	{
		cin>>s;
		fila=s.length()/a;
	    flag=true;
	    p=0;
	    i=0;
	    sw=1;
	    for(int k=0;k<fila;k++)
	    {
			for(int j=0;j<a;j++)
			{
				p=i+(sw*j);
				m[k][j]=s.at(p);				
			}
			if(flag)
			   sw=sw*-1;			
			i=p+a;			
		}
		for(int k=0;k<a;k++)
		{
			for(int j=0;j<fila;j++)
			{
				cout<<m[j][k];
			}			
		}
		cout<<endl;
		
	}
	return 0;
}

