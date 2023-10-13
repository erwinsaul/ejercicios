#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a,b,s;
	cin>>a>>b>>s;
	int d=abs(a)+abs(b);
	if(s>=d && (s-d)%2==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}

