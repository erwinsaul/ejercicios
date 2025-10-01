/*  Problem: Character Recognition
 *  Code: 1807
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: String
 */


#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>

using namespace std;

double round(double r)
{
	if(r>0.05)
	   return 0.1;
	return r;
}
int main(int argc, char **argv)
{
	istringstream ss;
	string s;
	int n;
	getline(cin,s);
	ss.str(s);
	ss>>n;
	int r;	
	int t=s.length();
	int d=0,total;
	while(n--)
	{
		r=0.0;
		d=0;
		total=0;
		while(getline(cin,s) && s.length()!=0)
		{			
		  t=s.length();	
		  total+=t;
		  for(int k=0;k<t;k++)
	      {
		    if(s.at(k)!='#')
		    d++;
	      } 
			 
		}
		r=(10000*d)/total+5;		
		cout<<"Efficiency ratio is "<<r/100;		
		if((r%100)/10)
		    printf(".%i",(r%100)/10);
	    cout<<"%."<<endl;
	}
	return 0;
}

