/* Problem: Sorting Five Numbers
 * Code: 0018	
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc
 */


#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    int v[5];
    for(int k=0;k<5;k++)
       cin>>v[k];
    sort(v,v+5);
    for(int k=4;k>=0;k--)
    {
		cout<<v[k];
	   if(k>0)
	     cout<<" ";      
    }
    cout<<endl;
	return 0;
}

