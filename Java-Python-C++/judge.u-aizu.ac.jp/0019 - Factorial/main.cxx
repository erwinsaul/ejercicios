/* Problem: Factorial
 * Code: 0019	
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc - Math
 */


#include <iostream>
#include <stdint.h> 

using namespace std;

int main(int argc, char **argv)
{
	uint64_t n,f=1;
	cin>>n;
	for(uint64_t k=1;k<=n;k++)
	    f=f*k;
	cout<<f<<endl;
	return 0;
}

