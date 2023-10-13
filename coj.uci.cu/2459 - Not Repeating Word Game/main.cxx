/*   Problem: Not Repeating Word Game
 *   Code: 2459
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Map / String
 */


#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int p1,p2,p3;
	map<string,int> a;
	map<string,int> b;
	map<string,int> c;
	map<string,int>::iterator it;
	map<string,int>::iterator f1;
	map<string,int>::iterator f2;
	string s;
	istringstream ss;
	while(1)
	{
		p1=0;
		p2=0;
		p3=0;
		getline(cin,s);	 		 	
	    ss.str(s);	    
	    while(ss>>s)
	    {
		  a[s]=3;
	    }	    
	    ss.clear();
	    
	    getline(cin,s);  
	    ss.str(s);
	    while(ss>>s)
	    {
		  b[s]=3;
	    }
	    ss.clear();
	    
	    getline(cin,s);    
	    ss.str(s);
	    while(ss>>s)
	    {
		  c[s]=3;
	    }
	    ss.clear();	 	    
		for(it=a.begin();it!=a.end();it++)
		{
		    s=(*it).first;
			f1=b.find(s);
			f2=c.find(s);
			if(f1!=b.end() && f2!=c.end())
			{
				a[(*it).first]-=2;
				b[(*it).first]-=2;
				c[(*it).first]-=2;
			}
			else if(f1!=b.end())
			{
				a[(*it).first]--;
				b[(*it).first]--;
			}
			else if(f2!=c.end())
			{
				a[(*it).first]--;
				c[(*it).first]--;
			}			
		}
        for(it=b.begin();it!=b.end();it++)
		{
			s=(*it).first;
			if((*it).second==3)
			{
			 f2=c.find(s);			
			 if(f2!=c.end())
			 {
				b[(*it).first]--;
				c[(*it).first]--;
			 }
		    }			
		}
		
       for(it=a.begin();it!=a.end();it++)
		{
		  p1=p1+(*it).second;
		}
		for(it=b.begin();it!=b.end();it++)
		{
		  p2=p2+(*it).second;
		}
		for(it=c.begin();it!=c.end();it++)
		{
		  p3=p3+(*it).second;
		}
		printf("%d/%d/%d\n",p1,p2,p3);
		a.clear();
		b.clear();
		c.clear();
	    if(!getline(cin,s))
	     {
			break;
		 }		 
    }
	return 0;
}

