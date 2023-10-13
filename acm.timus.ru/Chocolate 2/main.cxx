/*  Problem:  Chocolate 2
 *  Code: 1639
 *  Site: acm.timus.ru
 *  Type: Ad-Hoc / Mat
 *  Status : Accepted
 */         


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a,b;
	cin>>a>>b;
	if((a*b)%2==0)
	   cout<<"[:=[first]";
	else
	   cout<<"[second]=:]";
	return 0;
}

