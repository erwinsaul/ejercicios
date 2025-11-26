/* problem:  Coco-Bits and the Coco-Strings
 * code: 2732
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	string s;
	char c;
	cin>>n;
	while(n--)
	{
		cin>>s;
		for(int k=0;k<s.length();k++)
		{
			c=s.at(k);
			if(isupper(c))
			{
				cout<<(char)tolower(c);
			}
			else
			{
				cout<<(char)toupper(c);
			}
		}
		cout<<endl;
	}
	return 0;
}

