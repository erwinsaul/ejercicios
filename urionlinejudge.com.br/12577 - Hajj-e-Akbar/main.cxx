/*  Problem: 12577 - Hajj-e-Akbar
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Ad-Hoc	
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	int k=1;
	while(cin>>s && s.compare("*")!=0)
	{
		cout<<"Case "<<k<<": ";
		if(s.compare("Hajj")==0)
		   cout<<"Hajj-e-Akbar"<<endl;
		else
		 cout<<"Hajj-e-Asghar"<<endl;
		k++;
	}
	return 0;
}

