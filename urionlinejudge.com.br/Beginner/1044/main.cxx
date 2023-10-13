/*  Problem: Multiples
 *  Code: 1044
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a, b;
	cin>>a>>b;
	if(a%b==0 || b%a==0)
	  cout<<"Sao Multiplos"<<endl;
	else
	  cout<<"Nao sao Multiplos"<<endl;
	return 0;
}

