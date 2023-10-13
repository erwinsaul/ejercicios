/* Problem: Is your horseshoe on the other hoof?
 * Code: 228A	
 * Site: codeforces.com
 * Status: Accepted
 * Type: Ad-Hoc
 */


#include <iostream>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
    int a,b,c,d;
    map<int,int> m;
   	while(cin>>a>>b>>c>>d)
   	{
		m[a]++;
		m[b]++;
		m[c]++;
		m[d]++;
		cout<<(4-m.size())<<endl;
	    m.clear();	
	}
	return 0;
}

