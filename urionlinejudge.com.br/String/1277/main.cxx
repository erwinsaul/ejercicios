/*  Problem: Short Attendance
 *  Code: 1277
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int main(int argc, char **argv)
{
	int t,n;
	double por;
	cin>>t;
	string s[100];
	string a;
	int as,p,m,total;
	vector<string> salida;
    vector<string>::iterator it;
	while(t--)
	{
	   cin>>n;
	   for(int k=0;k<n;k++)
	   {
		   cin>>s[k];
	   }
	   for(int k=0;k<n;k++)
	   {
		   cin>>a;
		   as=0;
		   p=0;
		   m=0;
		   total=a.length();
		   for(int i=0;i<total;i++)
		   {
			   if(a.at(i)=='A')
			      as++;
			   if(a.at(i)=='P')
			      p++;
			   if(a.at(i)=='M')
			     m++;
		   }
		  total=total-m;
		  por=((double)p*(100.0))/(double)total;
		  
		  if(por<75.0)
		  {
			  salida.push_back(s[k]);
		  }
		 
	   }
	   
	   for(int k=0;k<(int)salida.size();k++)
	   {
		   cout<<salida[k];
		   if((k+1)<(int)salida.size())
		        cout<<" ";
	   }
	   cout<<endl;
	   salida.clear();
	}
	return 0;
}

