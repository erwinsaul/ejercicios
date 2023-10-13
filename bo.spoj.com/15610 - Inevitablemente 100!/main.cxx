/*   Problem:  15610 - Inevitablemente 100!
 *   Code: 15610
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Ad-hoc
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	while(cin>>n && n)
	{
		cout<<100-n<<endl;
	}
	return 0;
}

