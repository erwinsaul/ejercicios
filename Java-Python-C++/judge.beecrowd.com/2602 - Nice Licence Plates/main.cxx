/*  Problem: 12602 - Nice Licence Plates
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int base(string s)
{
	return ((s.at(0)-65)*26*26+(s.at(1)-65)*26+(s.at(2)-65));
	
}

int diez(string s)
{
	return ((s.at(0)-48)*1000+(s.at(1)-48)*100+(s.at(2)-48)*10+(s.at(3)-48));
}

int main(int argc, char **argv)
{
	int t,a,b;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		a=base(s.substr(0,3));
		b=diez(s.substr(4,s.length()));		
		if(fabs(a-b)<=100)
		   cout<<"nice"<<endl;
		else
		   cout<<"not nice"<<endl;
		
	}
	return 0;
}

