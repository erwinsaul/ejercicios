/*   Problem:  1465 - String Formatting
 *   Site: coj.uci.cu
 *   Status: Pending
 *   type: string
 */


#include <bits/stdc++.h>

using namespace std;


string espacios(string s)
{
	string r="";
	istringstream ss(s);
	while(ss>>s)
	{
		r=r+s+" ";
	}	
	s=r;
	for(int k=0;k<(int)s.length()-1;k++)
	{
		if(s.at(k)==' ' && s.at(k+1)==',')
		{
			s=s.substr(0,k)+s.substr(k+1,s.length());
		}
	}
	
	return s;
}

string puntos(string s)
{
	int f=0;
	string c="...";
	while(1)
	{
		f=s.find(c,f);
		if(f==-1)
		   break;				
		s=s.substr(0,f)+" "+s.substr(f,s.length());		
		f=f+4;
	}
	return s;
}

string prin(string s)
{
	while(s.at(0)==' ')
    {
		s=s.substr(1,s.length());	
	}	
	
	return s;
}

string comas(string s)
{
	int t=s.length();
	string r="";
	for(int k=0;k<t;k++)
	{
		if(s.at(k)==',' && (k+1)<t)
		{
			r.push_back(s.at(k));
			if(s.at(k+1)!=' ')
			{		  
			   r.push_back(' ');
		    }
		}
		else
		  r.push_back(s.at(k));
	}	
	s=r;	

	return s;
}

void solve(string s)
{
	string r=s;
	for(int k=0;k<(int)r.length()-1;k++)
	{
		cout<<r.at(k);
	}
	cout<<endl;	
}

int main(int argc, char **argv)
{
	string s;
	while(getline(cin,s))
	{
		s=espacios(s);
     	s=puntos(s);
		s=comas(prin(s));		
		solve(s);
    }	
	return 0;
}

