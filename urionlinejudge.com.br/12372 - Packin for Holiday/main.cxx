/*  Problem: 12372 - Packing for Holiday
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Ad-Hoc	
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t,l, w,h;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		cin>>l>>w>>h;
		cout<<"Case "<<(k+1)<<": ";
		if(l<=20 && w<=20 && h<=20)
		    cout<<"good";
		else
		    cout<<"bad";
		cout<<endl;
	}
	return 0;
}

