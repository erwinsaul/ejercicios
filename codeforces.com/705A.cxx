/*
Problem: 705-A
 */
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i>1)
			cout<<"that ";
		if(i%2==1)
			cout<<"I hate ";
		else
			cout<<"I love ";
		
			
	}
	cout<<"it";
	return 0;
}

