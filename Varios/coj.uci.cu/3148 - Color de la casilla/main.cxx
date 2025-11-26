/* problem: Color de la casilla
 * code: 3148
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	char l, n;
	int t, r;
	cin>>t;
	while(t--)
	{
		cin>>l>>n;
		r= (l-'a'+1)+(n-'0');
		if(r%2==1)
		  cout<<"BLACK"<<endl;
		else
		  cout<<"WHITE"<<endl;
	}
	return 0;
}

