/*  Problem: Month
 *  Code: 1052
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	string s;
	cin>>n;
	switch(n)
	{
		case 1: s="January";break;
		case 2: s="February";break;
		case 3: s="March";break;
		case 4: s="April";break;
		case 5: s="May";break;
		case 6: s="June";break;
		case 7: s="July";break;
		case 8: s="August";break;
		case 9: s="September";break;
		case 10: s="October";break;
		case 11: s="November";break;
		case 12: s="December";break;
	}
	cout<<s<<endl;
	return 0;
}

