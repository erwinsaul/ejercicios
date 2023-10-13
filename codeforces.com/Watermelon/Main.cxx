/* Problem: Watermelon
 * Code: 4-a
 * Site: codeforces.com
 * Status: Accepted
 * */      


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin>>n;
	if(n%2==0&&n>2)
	{
	   cout<<"YES"<<endl;		
	}
	else
	  cout<<"NO"<<endl;
	return 0;
}

