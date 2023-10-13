/*   Problem: Harry Potter and the Points
 *   Code: 2362
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Simulacion
 */


#include <iostream>
#include <string.h>
#include <stdint.h>

using namespace std;

int main(int argc, char **argv)
{
	int t;  
	uint64_t n;  
	cin>>t;		
	while(t--)
	{
		cin>>n;
		cout<<(n*n)+(n-1)*(n-1)<<endl;
	}
	return 0;
}

