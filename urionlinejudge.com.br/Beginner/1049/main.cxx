/*  Problem: Animal
 *  Code: 1049
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	cin>>s;
	if(s.compare("vertebrado")==0)
	{
		cin>>s;
		if(s.compare("ave")==0)
		{
		  cin>>s;
		  if(s.compare("carnivoro")==0)
	   	  {
			cout<<"aguia"<<endl;
		  }
		  else
		  {
			  cout<<"pomba"<<endl;
		  }	
		}
		else
		{
		  cin>>s;
		  if(s.compare("onivoro")==0)
	   	  {
			cout<<"homen"<<endl;
		  }
		  else
		  {
			  cout<<"vaca"<<endl;
		  }	
		}
	}
	else
	{
		cin>>s;
		if(s.compare("inseto")==0)
		{
		  cin>>s;
		  if(s.compare("hematofago")==0)
	   	  {
			cout<<"pulga"<<endl;
		  }
		  else
		  {
			  cout<<"lagarta"<<endl;
		  }	
		}
		else
		{
		  cin>>s;	
		  if(s.compare("hematofago")==0)
	   	  {
			cout<<"sanguessuga"<<endl;
		  }
		  else
		  {
			  cout<<"minhoca"<<endl;
		  }	
		}
	}
	return 0;
}

