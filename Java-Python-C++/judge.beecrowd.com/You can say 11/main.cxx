/* Problem: You can say 11 
 * Code: 10929
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math
 * Status: Accepted
*/

#include <iostream>
#include <string>
using namespace std;
bool solve(string n)
{
	int i=0,p=0;
	for(int k=0;k<(int)n.length();k++)
	{
		if(k%2==0)
		  p=p+(n.at(k)-48);
		else
		  i=i+(n.at(k)-48);
	}
	return ((p-i)%11==0);
}
int main(int argc, char **argv)
{
	string n;
	while(1)
	{
		cin>>n;
		if(n.compare("0")==0)
		  break;
		if(solve(n))
		  cout<<n<<" is a multiple of 11."<<endl;
		else
		  cout<<n<<" is not a multiple of 11."<<endl;  
	}
	return 0;
}

