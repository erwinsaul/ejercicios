/*  Problem: 621 - Secret Research
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: Ad-Hoc	
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s;
    int t,tam;
    cin>>t;
    while(t--)
    {
		cin>>s;
		tam=s.length();
		if(s.compare("1") == 0 || s.compare("4") == 0 || s.compare("78") == 0)
		    cout<<"+";
		else if(s.at(tam-2)=='3' && s.at(tam-1)=='5')
		    cout<<"-";
		else if(s.at(0)=='9' && s.at(tam-1)=='4')
		    cout<<"*";
		else
		      cout<<"?";
		cout<<endl;
	}
	return 0;
}

