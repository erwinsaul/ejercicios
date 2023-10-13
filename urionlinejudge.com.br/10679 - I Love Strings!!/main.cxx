/*  Problem: 10679 - I Love Strings!!
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: String 
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    int t;
    string s,r;
    cin>>n;
    while(n--)
    {
		cin>>s;
		cin>>t;
		while(t--)
		{
			cin>>r;			
			if(s.find(r)>=0 && s.find(r)<s.length())
			  cout<<"y"<<endl;
			else
			  cout<<"n"<<endl;			
		}
	}
	return 0;
}

