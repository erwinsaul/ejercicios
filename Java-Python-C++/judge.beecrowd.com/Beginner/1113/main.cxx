/*  Problem: Sequence of Numbers and Sum
 *  Code: 1113
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,m;
	while(1)
	{
		cin>>n>>m;
		if(n==m)
		  break;
		if(n>m)
		 cout<<"Decrescente"<<endl;
		else
		  cout<<"Crescente"<<endl;
	}
	return 0;
}

