#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	int v[3];
	cin>>v[0];
	cin>>v[1];
	cin>>v[2];
	sort(v,v+3);
	if(v[0]==v[1] || v[0]==v[2] || v[1]==v[2])
		cout<<"S"<<endl;
	else if((v[0]+v[1])==v[2])
		cout<<"S"<<endl;
	else
		cout<<"N"<<endl;
	return 0;
}

