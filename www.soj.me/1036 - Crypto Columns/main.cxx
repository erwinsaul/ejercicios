/*  Problem: Crypto Columns
 *  Code: 1036
 *  Site: www.soj.me
 *  Status: Accepted
 *  Type: Ad-Hoc
 */


#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
	string s,c;
	char col,fila,pos;
	char m[100][100];
	while(1)
	{
		cin>>s;
		if(s.compare("THEEND")==0)
		    break;
		cin>>c;
		fila=c.length()/s.length();
		pos=0;
		for(int i=0;i<26;i++)
		{
		  col=(char)(i+65);		 
		  for(int k=0;k<(int)s.length();k++)
		  {
			if(col==s.at(k))
			{				
				for(int j=0;j<fila;j++)
				{
					m[j][k]=c.at(pos++);					
				}
			}
		  }
	    }  	   
	    for(int k=0;k<fila;k++)
	    {
			for(int j=0;j<(int)s.length();j++)
			{
				cout<<m[k][j];
			}			
		}
		cout<<endl;
		
	}
	return 0;
}

