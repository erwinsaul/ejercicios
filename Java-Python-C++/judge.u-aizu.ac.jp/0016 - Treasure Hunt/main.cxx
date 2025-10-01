/* Problem: Treasure Hunt
 * Code: 0016
 * Site: http://judge.u-aizu.ac.jp
 * Status: Pending
 * Type: Ad-Hoc / Ordenacion
 */


#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
	int x=0,y=0,d,t;
	string s;
	while(1)
	{
		cin>>s;
		if(s.compare("0,0")==0)
		    break;
		int i=s.find(",");
		d=atoi(s.substr(0,i));
		t=atoi(s.substr(i+1,s.length()-1));
		cout<<d<<t;
		if(d==0&&t==0)
		    break;
		
	}	
	return 0;
}

