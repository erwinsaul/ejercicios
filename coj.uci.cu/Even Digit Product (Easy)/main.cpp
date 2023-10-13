//    Problem: Even Digit Product (Easy)
//    Site: coj.uci.cu  
//    Code: 1504


#include <iostream>

using namespace std;

int p(long n)
{
	int c=11;
	while(n>0)
	{
		c*=(n%10);
		n=n/10;
	}
	return c;
}

int main(int argc, char** argv)
{
	int t,a,b;
	int cant=0;
	cin>>t;
	int v[1000000];
	for(int k=1;k<1000001;k++)
	{
		v[k]=p(k);
	}
	while(t--)
	{
		cin>>a>>b;
		cant=0;
	   for(int k=a;k<=b;k++)
	   {
		if(v[k]%2==0)
		  cant++;
       }
        
		cout<<cant<<endl;
	}
	return 0;
}
