/*
Problem: 977A
 */
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	long int n, k, d;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		d = n % 10;
		if(d==0){
			n = n / 10;
		}
		else{
			n = n - 1;
		}
	}
	cout<<n<<endl;
	return 0;
}

