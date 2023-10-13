/*  Problem: The Greatest
 *  Code: 1013
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cmath>
using namespace std;
int mayor(int a, int b)
{
	return (a+b+fabs(a-b))/2;
}
int main(int argc, char **argv)
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<mayor(mayor(a,b),c)<<" eh o maior"<<endl;
	return 0;
}

