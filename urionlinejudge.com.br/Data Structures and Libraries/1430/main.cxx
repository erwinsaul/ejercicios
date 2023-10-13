/*  Problem: Jingle Composing
 *  Code: 1430
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted(3)
 *  Type: Data Structures and Libraries
 */


#include <iostream>
#include <sstream>
#include <map>

using namespace std;

string separar(string s)
{
	int t=s.length();
	for(int k=0;k<t;k++)
	{
		if(s.at(k)=='/')
		   s.at(k)=' ';
	}
	return s;
}

int main(int argc, char **argv)
{
    map<char,double> m;
    m['W']=1.0;
    m['H']=1.0/2.0;
    m['Q']=1.0/4.0;
    m['E']=1.0/8.0;
    m['S']=1.0/16.0;
    m['T']=1.0/32.0;
    m['X']=1.0/64.0;
    string s;
    int t,r;
    double sum;
    istringstream ss;
    while(1)
    {
		cin>>s;
		if(s.at(0)=='*')
		   break;
		s=separar(s);		
		ss.str(s);	
		r=0;
		while(ss>>s)
		{
		 
		 t=s.length();
		 sum=0.0;
		 for(int k=0;k<t;k++)
		 {
			sum=sum+m[s.at(k)];
		  }
		  if(sum==1.0)
		    r++;
	    }
		ss.clear();		
		cout<<r<<endl;
	}
    
    	
	return 0;
}

