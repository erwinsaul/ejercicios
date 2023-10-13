/*  Problem: Banknotes
 *  Code: 1017
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted 
 *  Type: Beginner - 1
 */

#include <iostream>
using namespace std;

int nota(int n, int p)
{
	int d=n/p;	
	cout<<d<<" nota(s) de R$ "<<p<<",00"<<endl; 
	return (n%p);
}

int main(int argc, char **argv)
{
	int n;
	cin>>n;
	cout<<n<<endl;
	n=nota(n,100);
	n=nota(n,50);
	n=nota(n,20);
	n=nota(n,10);
	n=nota(n,5);
	n=nota(n,2);
	n=nota(n,1);
	return 0;
}

