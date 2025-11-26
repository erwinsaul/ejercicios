#include<iostream>
using namespace std;
int main(){
	long n, l, r;
	cin>>n;
	long ind=0, resp;
	for(int i=0;i<n;i++){
		cin>>l>>r;
		resp = 0;
		ind = 0;
		while(l<=r){
			resp = resp + 1;
			ind = ind + 1;
			l = l + ind;
		}
		//r = ((r-l)+1)/2 + 1;
		cout<<resp<<endl;
	}
	return 0;
}
