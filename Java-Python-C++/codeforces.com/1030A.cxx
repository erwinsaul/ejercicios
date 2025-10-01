/*
Problem: 1030A
 */
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int t, n, r;
	cin>>t;
	r = 0;
	for(int i = 0;i < t;i++){
		cin>>n;
		r = r | n;
	}	
	if(r)
		cout<<"HARD";
	else
		cout<<"EASY";
	return 0;
}

