/*  Problem:  Even? Odd? 
 *  Code: 2196
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Data
 */

#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		if((s.at(s.length()-1)-48)%2==0)
		     cout<<"even"<<endl;
		else
		     cout<<"odd"<<endl;
		
	}
	
	return 0;
}

