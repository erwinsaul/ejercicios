/*  Problem: How Easy
 *  Code: 1243
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted(2)
 *  Type: String
 */


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool is_letra(char c)
{
	if(tolower(c)>='a' && tolower(c)<='z')
	  return true;
	return false;
}

bool es_palabra(string s)
{
	int t=s.length();
	for(int k=0;k<t;k++)
	{
		if(!is_letra(tolower(s.at(k))))
		    return false;
	}
	return true;
}

int main(int argc, char **argv)
{
    string s;
    istringstream ss;
    int t, r, sum;
    while(getline(cin,s))
    {
		ss.str(s);
		sum=0;
		t=0;
		while(ss>>s)
		{
			if(es_palabra(s))
			{
			 sum=sum+s.length();
			 t++;
		    }
		}		
		if(t==0)
		   r=0;
		else
		   r=sum/t;		   
		if(r<=3)
		  cout<<"250"<<endl;
		if(r==4 || r==5)
		  cout<<"500"<<endl;
		if(r>=6)
		cout<<"1000"<<endl;
		ss.clear();
	}	
	return 0;
}

