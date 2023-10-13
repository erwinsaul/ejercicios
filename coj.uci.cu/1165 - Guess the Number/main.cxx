/*   Problem:  1165 - Guess the Number
 *   Site: coj.uci.cu
 *   Status: Accepted 
 *   type: String
 */


#include <iostream>
#include <string>
#include <cmath>

using namespace std;
long long gcd(long long x, long long y)
{
   return y ? gcd(y, x % y) : abs(x);
}

long long lcm(long long x, long long y)
{
	return (x*y)/gcd(x,y);
}

int main(int argc, char **argv)
{
	string s;
	long long n;
	bool flag;
	while(cin>>s && s.compare("*")!=0)
	{
		n=1;
		flag=true;
		for(int k=0;k<(int)s.length();k++)
		{
			if(s.at(k)=='Y')
			{
				n=lcm(n,(k+1));
			}
		}
		
		for(int k=0;k<(int)s.length();k++)
		{
			if(s.at(k)=='N')
			{
				if(n%(k+1)==0)
				 {
					 flag=false;
					 break;
				 }
			}
		}
		if(flag)
		  cout<<n<<endl;
		else
		  cout<<"-1"<<endl;
		
	}
	return 0;
}

