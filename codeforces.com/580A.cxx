/*
Problem: 580-A
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n, d, r, ant, t;
	cin>>n;
	cin>>d;
	ant = d;
	r = 1;
	t = 1;
	for(int i=1;i<n;i++){
		cin>>d;
		if(d>=ant){			
			t++;
		}
		else{
			r = max(t, r);
			t = 1;
		}
		ant = d;
	}
	r = max(t, r);
	cout<<r<<endl;
	
	return 0;
}

