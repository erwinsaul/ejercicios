/* Problem: Switching Railroad Cars
 * Code: 0013
 * Site: http://judge.u-aizu.ac.jp
 * Status: accepted
 * Type: Pilas
 */

#include <iostream>
#include <stack>
#include <cstdio>

using namespace std;
int main(int argc, char **argv)
{
	stack <int> s;stack <int> aux;
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			cout<<s.top()<<endl;
			s.pop();
		}
		else
		  s.push(n);
		aux=s;
		  
  
  
	} 
	return 0;
}

