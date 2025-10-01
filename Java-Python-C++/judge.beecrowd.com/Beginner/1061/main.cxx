/*  Problem: Event Time
 *  Code: 1061
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Begginer
 */

#include <algorithm>
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
	string dia;
	int d1,h1,m1,s1;
	int d2,h2,m2,s2;
	int d,h,m,s;
	char c;
	cin>>dia>>d1;
	cin>>h1>>c>>m1>>c>>s1;
	cin>>dia>>d2;
	cin>>h2>>c>>m2>>c>>s2;
	d=d2-d1-1;
	h=(24-h1)+h2;
	if(m1>m2)
	   m=(60-m1)+m2;
	else
	  m=m2-m1;
	if(s1>s2)
	   s=(60-s1)+s2;
	else
	  s=s2-s1;
	cout<<d<<" dia(s)"<<endl;
	cout<<h<<" hora(s)"<<endl;
	cout<<m<<" minuto(s)"<<endl;
	cout<<s<<" segundo(s)"<<endl;
	
	return 0;
}

