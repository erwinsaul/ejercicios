/* problem: Way Too Long Words
 * code: 3073
 * site: coj.uci.cu
 * status: accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    string s;
    int n, t;
    cin>>n;
    while(n--)
    {
		cin>>s;
		t=s.length();
		if(t>10)
		{
			cout<<s.at(0)<<t-2<<s.at(t-1)<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
		
	}	
	return 0;
}

