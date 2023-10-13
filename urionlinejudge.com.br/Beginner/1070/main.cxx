/*  Problem: Six Odd Numbers
 *  Code: 1070
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,k=0;
	cin>>n;
	while(k<6)
	{
		if(n%2==1)
		{
		  cout<<n<<endl;
		  k++;
		} 
		n++;
	}
	return 0;
}

