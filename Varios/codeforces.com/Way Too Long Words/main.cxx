/* Problem: Way Too Long Words
 * Code: 71-A
 * Site: codeforces.com
 * Status:Accepted
 * */


#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
	  cin>>s;
	  int size=s.length();
	  if(size>10)
	  {
		  cout<<s.at(0)<<size-2<<s.at(size-1)<<endl;
	  }
	  else
	  cout<<s<<endl;	
	}
	return 0;
}

