/* Problem: Find the Telephone
 * Code: 10921
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math /String
 * Status: Accepted
*/

#include <iostream>
#include <string>
using namespace std;
char find(char c)
{
	switch (c)
	{
		case 'A': case 'B': case 'C': return '2';break;
		case 'D': case 'E': case 'F': return '3';break;
		case 'G': case 'H': case 'I': return '4';break;
		case 'J': case 'K': case 'L': return '5';break;
		case 'M': case 'N': case 'O': return '6';break;
		case 'P': case 'Q': case 'R': case 'S':return '7';break;
		case 'T': case 'U': case 'V': return '8';break;
		case 'W': case 'X': case 'Y': case 'Z':return '9';break;
		default :return c;break;
	} 
}
int main(int argc, char **argv)
{
	string s;
	while(cin>>s)
	{
		for(int k=0;k<(int)s.length();k++)
		{
			cout<<find(s.at(k));
		}
		cout<<endl;
	}
	return 0;
}

