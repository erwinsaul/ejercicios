// Site: coj.uci.cu
// Problem: Egypt

#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c;
	while(1)
	{
		cin>>a>>b>>c;
		if(a+b+c==0)
		   break;
		if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
		    cout<<"right"<<endl;
		else
		   cout<<"wrong"<<endl;
		  
	}	
    return 0;
}
