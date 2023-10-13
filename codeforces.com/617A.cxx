/*
Problem: 617-A
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n, r, i;
	int v[]={5,4,3,2,1};
	cin>>n;
	r=0;
	i=0;
	while(n>0){
		if(n>=v[i]){
			n = n - v[i];
			r++;
		}
		else{
			i++;
		}
	}
	cout<<r<<endl;
	return 0;
}

