/* problem:Nombres Geniales
 * code: 21145
 * site: bo.spoj.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	string s;
	cin>>s;
	if(s.length()%2==0)
		cout<<"Es Genial";
	else
		cout<<"No es Genial";
	return 0;
}

