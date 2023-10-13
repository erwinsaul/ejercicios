/*   Problem:  2231 - Challenge
 *   Code: 2281
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Simulacion / String
 */


#include <iostream>
#include <string>

using namespace std;

int puntaje(string s,string c)
{
	if(s.compare("rock")==0)
	{
		if(c.compare("scissors")==0)
		   return 1;
		if(c.compare("paper")==0)
	       return 2;
	    if(c.compare("rock")==0)
	       return 0;
	}
	if(s.compare("scissors")==0)
	{
		if(c.compare("rock")==0)
		   return 2;
		if(c.compare("paper")==0)
	       return 1;
	    if(c.compare("scissors")==0)
	       return 0;
	}
	if(s.compare("paper")==0)
	{
		if(c.compare("rock")==0)
		   return 1;
		if(c.compare("paper")==0)
	       return 0;
	    if(c.compare("scissors")==0)
	       return 2;
	}
}

int main(int argc, char **argv)
{
	int t,a=0,b=0,p;
	string s,c;
	cin>>t;
	while(t--)
	{
		cin>>s>>c;	
		p=puntaje(s,c);
		if(p==1)
		    a++;
		if(p==2)
		    b++;	  
	}	
	if(a==b)
	   cout<<"tied";
	else if(a>b)   
	   cout<<"A win";
	else
	    cout<<"B win";
	return 0;
}

