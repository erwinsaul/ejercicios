#include <iostream>
using namespace std;
int d(string s)
{
	int r = 0;
	for(int k=0;k<s.length();k++)
	{
		r = r + s.at(k)-48;
	}
	return r;
}

int r(int n)
{
	int s = 0;
	while(n>0)
	{
		s = s + n%10;
		n = n / 10;
	}
	return s;
}
int main(int argc, char **argv)
{
	string a, b;
	int n,m;
	while(1)
	{
		cin>>a>>b;
		if(a=="0" && b=="0")
			break;
		n = d(a);
		
		m = d(b);
		
		n = r(n);
		m = r(m);
		if(n>m)
			cout<<"1"<<endl;
		else if(n<m)
			cout<<"2"<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}

