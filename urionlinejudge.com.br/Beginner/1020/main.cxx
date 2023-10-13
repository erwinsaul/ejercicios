/*  Problem: Age in Days
 *  Code: 1020
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	
	int d,a,m;
	cin>>d;
	a=d/365;
	d=d%365;
	m=d/30;
	d=d%30;
	cout<<a<<" ano(s)"<<endl;
	cout<<m<<" mes(es)"<<endl;
	cout<<d<<" dia(s)"<<endl;	
	return 0;
}

