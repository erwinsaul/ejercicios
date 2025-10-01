/* problem: Counting Sheep
 * code: 2001
 * site: acm.tju.edu.cn
 * status:pendind
 */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int n, t, r;
	string s;
	cin>>n;	
	for(int k=1;k<=n;k++)
	{
		cin>>t;
		r=0;
		while(t--)
		{
			cin>>s;
			if(s.compare("sheep")==0)
			    r++;
		}
		cout<<"Case "<<k<<": This list contains "<<r<<" sheep."<<endl;
	}
	return 0;
}
