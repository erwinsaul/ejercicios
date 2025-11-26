/*   Problem: A New Game
 *   Code: 2446
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Simulacion
 */

#include <iostream>
#include <string>

using namespace std;
int p; //bianka
int m; //williams

int blancos(string s)
{
	int r=0;
	if(s.at(0)=='W') r++;
	if(s.at(1)=='W') r++;
	if(s.at(2)=='W') r++;
	return r;
    
}
int azules(string s)
{
	int r=0;
	if(s.at(0)=='B') r++;
	if(s.at(1)=='B') r++;
	if(s.at(2)=='B') r++;
	return r;
}

int puntaje(string s)
{
	int b=blancos(s);
	int a=azules(s);
	if(s.compare("BBB")==0)
	   return 3; //piedra
	else if(s.compare("WWW")==0)
	   return 2; //tijera
	else if(b==1 && a==2)
	     return 3; //piedra	
	else if(b==2 && a==1)
	    return 2; //tijera
	else
	   return 0;
}
int solve(string s, string c)
{
	
	int b=blancos(s);
	int a=azules(s);
	if(b==2 || a==2)
	   p=1;
	else
	   p=puntaje(s);
	
	m=puntaje(c);    
	
	if(p==3 && m==2)
	   return 1;
	else if(p==2 && m==1) 
	   return 1;
	else if(p==1 && m==3)
	   return 1;
	   
	else if(p==2 && m==3)
	   return 2;
	else if(p==1 && m==2) 
	   return 2;
	else if(p==3 && m==1)
	   return 2;	
}

string nombre(int n)
{
	if(n==1)
	   return "Paper";
	else if(n==2)
	   return "Scissors";
	return "Rock";
}

int main(int argc, char **argv)
{
	string s, c;
	cin>>s>>c;
	
	if(solve(s,c)==1)
	{
	 cout<<"Bianka won with "<<nombre(p)<<endl; 
	 cout<<"Williams lost with "<<nombre(m)<<endl; 
    }
	else
	{
	 cout<<"Williams won with "<<nombre(m)<<endl; 
     cout<<"Bianka lost with "<<nombre(p)<<endl;; 
    }
	
	return 0;
}

