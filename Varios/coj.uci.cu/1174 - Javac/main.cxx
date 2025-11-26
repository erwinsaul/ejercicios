/*   Problem:  1174 - Javac
 *   Code: 1174
 *   Site: coj.uci.cu
 *   Status: Accepted (7)
 *   type: String
 */

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
	string s,c;
	bool flag;
	int f;
	while(getline(cin,s))
	{
		c="";
		if(isupper(s.at(0)) || s.at(0)=='_' || s.at(s.length()-1)=='_' || isdigit(s.at(0)))
		   cout<<"Error!"<<endl;
		else
		{
		 f=s.find("_");		 
		 flag=true;
		 if(f>-1)
		 {
		  for(int k=0;k<(int)s.length();k++)
		  {
			if(s.at(k)!='_')
			{
				if(s.at(k)<'a')
				{
					flag=false;
					break;
				}
				else
				  c.push_back(s.at(k));			
			}
			else
			{
				if(s.at(k+1)<'a')
				{
					flag=false;
					break;
				}
				else
				{
				 c.push_back(toupper(s.at(k+1)));
				 k++;
			    }
			}
		  }
		 }
		 else
		 {
			 for(int k=0;k<(int)s.length();k++)
			 {
				 if(s.at(k)>='a')
				 {
					 c.push_back(s.at(k));
				 }
				 else
				 {
					 c.push_back('_');
					 c.push_back(tolower(s.at(k)));
				 }
			 }
		 }
		 if(flag)
		   cout<<c<<endl;
		 else
		   cout<<"Error!"<<endl;
	    }
			
	}
	return 0;
}

