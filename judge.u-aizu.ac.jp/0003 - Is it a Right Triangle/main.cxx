/* Problem: Is it a Right Triangle?
 * Code: 0003
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc 
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int v[3];
    int t;
    cin>>t;
    while(t--)
    {
		cin>>v[0]>>v[1]>>v[2];
		sort(v, v+3);
	    if((v[0]*v[0])+(v[1]*v[1])==v[2]*v[2])
	      cout<<"YES"<<endl;
	    else
	      cout<<"NO"<<endl;
	}	
	return 0;
}

