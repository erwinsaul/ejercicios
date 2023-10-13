/*  Problem: Even or Odd
 *  Code: 1074
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==0) 
		   cout<<"NULL"<<endl;
		else
		{
			if(n%2==0)
			  cout<<"EVEN ";
			else
			  cout<<"ODD ";
			if(n<0)
			  cout<<"NEGATIVE"<<endl;
			else
			  cout<<"POSITIVE"<<endl;
		}
    }	
	return 0;
}

