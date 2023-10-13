/* problem: Soda Surpler
 * code: 3445
 * site: acm.tju.edu.cn
 * status:pendind
 */
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int e, f, c, total;
	while(cin>>e>>f>>c && (e || f || c))
	{
		total=0;
		e = e + f;
		while(e >= c)
		{
			total = total + (e/c);
			e = (e/c) + (e%c);
		}
		cout<<total<<endl;
	}
	return 0;
}

