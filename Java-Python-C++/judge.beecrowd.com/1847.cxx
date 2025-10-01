#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && b<=c)
	{
		cout<<":)"<<endl;
	}
	else if(a<b && b>=c)
	{
		cout<<":("<<endl;
	}
	else if(a<b && b<c && (b-a)  )
	{
		cout<<":("<<endl;
	}
	else if(a<b && b<c && (b-a)<=(c-b) )
	{
		cout<<":)"<<endl;
	}
	else if(a>b && b>c && (a-b)>(b-c) )
	{
		cout<<":)"<<endl;
	}
	else if(a>b && b>c && (a-b)<=(b-c))
	{
		cout<<":("<<endl;
	}
	else if(b < c)
			cout<<":)"<<endl;	
	else
		{	
			cout<<":("<<endl;
		}
	
	return 0;
}

