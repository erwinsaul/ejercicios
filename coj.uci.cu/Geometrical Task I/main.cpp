//      Site: coj.uci.cu
//      Problem: Geometrical Task I

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string fig;
	int a,b;
	cin>>fig;
	if(fig.compare("rectangle")==0)
	  {
		  cin>>a>>b;
		  cout<<a*b<<endl;
	  }
	else
    	{
		  cin>>a;
		  cout<<a*a<<endl;
	  }
	return 0;
}
