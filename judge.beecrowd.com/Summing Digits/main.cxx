/* Problem Summing Digits
 * Code: 11332
 * Site: uva.onlinejudge.org
 * Status: Accepted
*/     


#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string convertInt(int number)
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}

int sum(string s)
{
	int r=0;
	for(int k=0;k<(int)s.length();k++)
	{
		r+=(s.at(k)-48);
	}
	return r;
}
int main(int argc, char **argv)
{
	string cad;
	int n;
	while(1)
	{
		cin>>cad;
		if(cad.compare("0")==0)
		  break;
		while((n=sum(cad))>9)
		{
			cad=convertInt(n);
		}
		cout<<n<<endl;
	}
	return 0;
}

