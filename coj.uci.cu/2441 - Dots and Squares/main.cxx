/*   Problem:  Dots and Squares
 *   Code: 2441
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int t,f,c;
	int total;
	cin>>t;
	while(t--)
	{
		cin>>f>>c;
		total=f*(c+1)+c*(f+1);
		if(total%2==0)
		  cout<<"Second"<<endl;
		else
		  cout<<"First"<<endl;
		
	}
	return 0;
}

