/* Problem: Reverse Sequence
 * Code: 0006
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc - String
 */


#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string s;
	cin>>s;
	int t=s.length();
	for(int k=(t-1);k>=0;k--)
	   cout<<s.at(k);
	cout<<endl;
	return 0;
}

