/* Problem: Ugly Numbers
 * Code: 136
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math
 * Status: Accepted (2)
*/


#include <iostream>
using namespace std;
/*int solve(unsigned long long int n)
{
	while(n%2==0)
	{
		n=n/2;
	}
	while(n%3==0)
	{
		n=n/3;
	}
	while(n%5==0)
	{
		n=n/5;
	}
	return n;
}

int main(int argc, char **argv)
{
	int k=1;
	unsigned long long int c=1;
	cout<<k<<" "<<c<<endl;
	while(k<=1500)
	{
		c++;
		if(solve(c)==1)
		{
		  cout<<k<<" "<<c<<endl;
		  k++;
		} 
		
    } 
	return 0;
}*/

int main(int argc, char **argv)
{
	cout<<"The 1500'th ugly number is 859963392.\n";
	return 0;
}

