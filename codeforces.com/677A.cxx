/*
Problem: 677A
 */
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,h,a,r=0;
	cin>>n>>h;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>h){
			r=r+2;
		}
		else{
			r++;
		}
	}
	cout<<r<<endl;
	return 0;
}

